# Copyright Epic Games, Inc. All Rights Reserved.

import unreal
import argparse
import sys


def create_performance_asset(path_to_sound_wave : str, save_performance_location : str, asset_name: str = None) -> unreal.MetaHumanPerformance:
    """
    Returns a newly created MetaHuman Performance asset based on the input soundwave. 
    
    Args
        path_to_sound_wave: content path to a USoundWave asset that is going to be used by the performance
        save_performance_location: content path to store the new performance
    """
    sound_wave_asset = unreal.load_asset(path_to_sound_wave)
    performance_asset_name = "{0}_Performance".format(sound_wave_asset.get_name()) if not asset_name else asset_name

    asset_tools = unreal.AssetToolsHelpers.get_asset_tools()
    performance_asset = asset_tools.create_asset(asset_name=performance_asset_name, package_path=save_performance_location, 
                                                 asset_class=unreal.MetaHumanPerformance, factory=unreal.MetaHumanPerformanceFactoryNew())

    # Use this style as set_editor_property doesn't trigger the PostEditChangeProperty required to setup the Performance asset
    performance_asset.set_editor_property("input_type", unreal.DataInputType.AUDIO)
    performance_asset.set_editor_property("audio", sound_wave_asset)

    return performance_asset

def run():
    """Main function to run for this module"""
    parser = argparse.ArgumentParser(prog=sys.argv[0], description=
        'This script is used to create a MetaHuman Performance asset and process a shot from a USoundWave asset ')
    parser.add_argument("--soundwave-path", type=str, required=True, help="Content path to USoundWave asset to be used by the performance")
    parser.add_argument("--storage-path", type=str, default='/Game/', help="Content path where the assets should be stored, e.g. /Game/MHA-Data/")

    args = parser.parse_args()

    performance_asset = create_performance_asset(
        path_to_sound_wave=args.soundwave_path,
        save_performance_location=args.storage_path)
    
    from process_performance import process_shot
    process_shot(
        performance_asset=performance_asset)


if __name__ == "__main__":
    run()
