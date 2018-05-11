#!/bin/sh

echo $1
rootdirectory="$PWD"
dirs="external/sepolicy frameworks/native system/core"

for dir in $dirs ; do
	cd $rootdirectory
	cd $dir
	echo -e "Cleaning $dir patches...\n"
	git checkout -- . && git clean -df
done

echo -e "Done !\n"
cd $rootdirectory
