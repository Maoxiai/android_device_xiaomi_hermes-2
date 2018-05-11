#!/bin/sh

echo $1
rootdirectory="$PWD"
dirs="external/sepolicy frameworks/native system/core"

for dir in $dirs ; do
	cd $rootdirectory
	cd $dir
    echo -e "Applying $dir patches...\n"
	git apply -v $rootdirectory/device/xiaomi/hermes/patches/$dir/*.patch
done

echo -e "Done !\n"
cd $rootdirectory
