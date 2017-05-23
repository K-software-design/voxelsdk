/*
 * TI Voxel Lib component.
 *
 * Copyright (c) 2017 Texas Instruments Inc.
 */

#ifndef VOXEL_TI_TINTINCDKCAMERAUVC_H
#define VOXEL_TI_TINTINCDKCAMERAUVC_H

#include <TintinCDKCamera.h>
#include <Downloader.h>
#define TINTIN_CDK_VENDOR_ID 0x0451U
#define TINTIN_CDK_PRODUCT_UVC 0x9106U

#define PVDD "pvdd" // Illumination voltage
#define MIX_VOLTAGE "mix_volt" // Mixing voltage
#define TILLUM_SLAVE_ADDR "tillum_slv_addr"
#define LUMPED_DEAD_TIME "lumped_dead_time"
#define ILLUM_DC_CORR "illum_dc_corr"
#define ILLUM_DC_CORR_DIR "illum_dc_corr_dir"
#define DELAY_FB_CORR_MODE "delay_fb_corr_mode"
#define DELAY_FB_DC_CORR_MODE "delay_fb_dc_corr_mode"
#define COMP_VREF "comp_vref"


namespace Voxel
{

namespace TI
{

class TintinCDKCameraUVC: public TintinCDKCamera
{
protected:
  Ptr<Downloader> _downloader;


  bool _init();

  virtual bool _getSupportedVideoModes(Vector<SupportedVideoMode> &supportedVideoModes) const;
  virtual bool _setStreamerFrameSize(const FrameSize &s);
  virtual bool _getMaximumVideoMode(VideoMode &videoMode) const;

public:
  TintinCDKCameraUVC(DevicePtr device);

  virtual ~TintinCDKCameraUVC() {}

};

}
}

#endif // VOXEL_TI_TINTINCDKCAMERA_H
