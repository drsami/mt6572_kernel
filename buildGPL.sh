export PATH=${PATH}:~/Your_Toolchain_PATH/

cd kernel

export TARGET_PRODUCT=cci72_we_jb3 
export MTK_ROOT_CUSOMT=../mediatek/custom/ 
export MTK_PATH_PLATFORM=../mediatek/platform/mt6572/kernel/ 
make
