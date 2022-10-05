// 0x0E000E00
const GeoLayout lll_geo_000E00[] = {
   GEO_NODE_SCREEN_AREA(10, SCREEN_CENTER_X, SCREEN_CENTER_Y, SCREEN_CENTER_X, SCREEN_CENTER_Y),
   GEO_OPEN_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_NODE_ORTHO(100),
         GEO_OPEN_NODE(),
            GEO_BACKGROUND(BACKGROUND_FLAMING_SKY, geo_skybox_main),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(1),
      GEO_OPEN_NODE(),
         GEO_CAMERA_FRUSTUM_WITH_FUNC(64, 100, 20000, geo_camera_fov),
         GEO_OPEN_NODE(),
            GEO_CAMERA(CAMERA_MODE_RADIAL, 0, 2000, 6000, 0, 0, -8192, geo_camera_main),
            GEO_OPEN_NODE(),
               GEO_DISPLAY_LIST(LAYER_OPAQUE, lll_seg7_dl_070134E0),
               GEO_DISPLAY_LIST(LAYER_ALPHA, lll_seg7_dl_070138F8),
               GEO_DISPLAY_LIST(LAYER_ALPHA, lll_seg7_dl_070137C0),
               GEO_ASM(   0, geo_movtex_pause_control),
               GEO_ASM(MOVTEX_LLL_LAVA_FLOOR, geo_movtex_draw_nocolor),
               GEO_RENDER_OBJ(),
               GEO_ASM(ENVFX_LAVA_BUBBLES, geo_envfx_main),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
