cmd_/home/moatasem/device-driver/Yt_DD/1_hello/Module.symvers := sed 's/\.ko$$/\.o/' /home/moatasem/device-driver/Yt_DD/1_hello/modules.order | scripts/mod/modpost -m -a  -o /home/moatasem/device-driver/Yt_DD/1_hello/Module.symvers -e -i Module.symvers   -T -
