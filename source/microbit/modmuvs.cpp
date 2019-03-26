/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2015-2016 Damien P. George
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#include "microbit/microbitdal.h"

extern "C" {

#include <stdio.h>
#include <string.h>
#include "py/runtime0.h"
#include "py/runtime.h"
#include "microbit/modmicrobit.h"
#include "extmod/MuVisionSensor.h"

#define Debug 1
// class MuVisionSensor(object):
typedef struct _mp_obj_MuVisionSensor_t {
    mp_obj_base_t base;
    uint8_t address_;
    MuVisionSensor *Mu;
} mp_obj_MuVisionSensor_t;


// def MuVisionSensor.CameraGetAwb(self, awb)
STATIC mp_obj_t mod_muvs_MuVisionSensor_CameraGetAwb(mp_obj_t self, mp_obj_t awb) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(mod_muvs_MuVisionSensor_CameraGetAwb_obj, mod_muvs_MuVisionSensor_CameraGetAwb);

// def MuVisionSensor.CameraGetFPS(self, fps)
STATIC mp_obj_t mod_muvs_MuVisionSensor_CameraGetFPS(mp_obj_t self, mp_obj_t fps) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(mod_muvs_MuVisionSensor_CameraGetFPS_obj, mod_muvs_MuVisionSensor_CameraGetFPS);

// def MuVisionSensor.CameraGetRotate(self, enable)
STATIC mp_obj_t mod_muvs_MuVisionSensor_CameraGetRotate(mp_obj_t self, mp_obj_t enable) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(mod_muvs_MuVisionSensor_CameraGetRotate_obj, mod_muvs_MuVisionSensor_CameraGetRotate);

// def MuVisionSensor.CameraGetZoom(self, zoom)
STATIC mp_obj_t mod_muvs_MuVisionSensor_CameraGetZoom(mp_obj_t self, mp_obj_t zoom) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(mod_muvs_MuVisionSensor_CameraGetZoom_obj, mod_muvs_MuVisionSensor_CameraGetZoom);

// def MuVisionSensor.CameraSetAwb(self, awb)
STATIC mp_obj_t mod_muvs_MuVisionSensor_CameraSetAwb(mp_obj_t self, mp_obj_t awb) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(mod_muvs_MuVisionSensor_CameraSetAwb_obj, mod_muvs_MuVisionSensor_CameraSetAwb);

// def MuVisionSensor.CameraSetFPS(self, fps)
STATIC mp_obj_t mod_muvs_MuVisionSensor_CameraSetFPS(mp_obj_t self, mp_obj_t fps) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(mod_muvs_MuVisionSensor_CameraSetFPS_obj, mod_muvs_MuVisionSensor_CameraSetFPS);

// def MuVisionSensor.CameraSetRotate(self, enable)
STATIC mp_obj_t mod_muvs_MuVisionSensor_CameraSetRotate(mp_obj_t self, mp_obj_t enable) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(mod_muvs_MuVisionSensor_CameraSetRotate_obj, mod_muvs_MuVisionSensor_CameraSetRotate);

// def MuVisionSensor.CameraSetZoom(self, zoom)
STATIC mp_obj_t mod_muvs_MuVisionSensor_CameraSetZoom(mp_obj_t self, mp_obj_t zoom) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(mod_muvs_MuVisionSensor_CameraSetZoom_obj, mod_muvs_MuVisionSensor_CameraSetZoom);

// def MuVisionSensor.GetValue(self, vision_type, object_inf)
STATIC mp_obj_t mod_muvs_MuVisionSensor_GetValue(mp_obj_t self, mp_obj_t vision_type, mp_obj_t object_inf) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_3(mod_muvs_MuVisionSensor_GetValue_obj, mod_muvs_MuVisionSensor_GetValue);

// def MuVisionSensor.LEDsetColor(self, led, detected_color, undetected_color, level)
STATIC mp_obj_t mod_muvs_MuVisionSensor_LEDsetColor(size_t n_args, const mp_obj_t *args) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mod_muvs_MuVisionSensor_LEDsetColor_obj, 5, 5, mod_muvs_MuVisionSensor_LEDsetColor);

// def MuVisionSensor.LEDsetMode(self, led, manual, hold)
STATIC mp_obj_t mod_muvs_MuVisionSensor_LEDsetMode(size_t n_args, const mp_obj_t *args) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mod_muvs_MuVisionSensor_LEDsetMode_obj, 4, 4, mod_muvs_MuVisionSensor_LEDsetMode);

// def MuVisionSensor.SensorSetDefault(self)
STATIC mp_obj_t mod_muvs_MuVisionSensor_SensorSetDefault(mp_obj_t self) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(mod_muvs_MuVisionSensor_SensorSetDefault_obj, mod_muvs_MuVisionSensor_SensorSetDefault);

// def MuVisionSensor.SensorSetRestart(self)
STATIC mp_obj_t mod_muvs_MuVisionSensor_SensorSetRestart(mp_obj_t self) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(mod_muvs_MuVisionSensor_SensorSetRestart_obj, mod_muvs_MuVisionSensor_SensorSetRestart);

// def MuVisionSensor.SetValue(self, vision_type, object_inf, value)
STATIC mp_obj_t mod_muvs_MuVisionSensor_SetValue(size_t n_args, const mp_obj_t *args) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)args[0];
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mod_muvs_MuVisionSensor_SetValue_obj, 4, 4, mod_muvs_MuVisionSensor_SetValue);

// def MuVisionSensor.UartSetBaudrate(self, baudrate)
STATIC mp_obj_t mod_muvs_MuVisionSensor_UartSetBaudrate(mp_obj_t self, mp_obj_t baudrate) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(mod_muvs_MuVisionSensor_UartSetBaudrate_obj, mod_muvs_MuVisionSensor_UartSetBaudrate);

// def MuVisionSensor.UpdateResult(self, vision_type, wait_all_result)
STATIC mp_obj_t mod_muvs_MuVisionSensor_UpdateResult(mp_obj_t self, mp_obj_t vision_type, mp_obj_t wait_all_result) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_3(mod_muvs_MuVisionSensor_UpdateResult_obj, mod_muvs_MuVisionSensor_UpdateResult);

// def MuVisionSensor.VisionBegin(self, vision_type)
STATIC mp_obj_t mod_muvs_MuVisionSensor_VisionBegin(mp_obj_t self, mp_obj_t vision_type) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(mod_muvs_MuVisionSensor_VisionBegin_obj, mod_muvs_MuVisionSensor_VisionBegin);

// def MuVisionSensor.VisionEnd(self, vision_type)
STATIC mp_obj_t mod_muvs_MuVisionSensor_VisionEnd(mp_obj_t self, mp_obj_t vision_type) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(mod_muvs_MuVisionSensor_VisionEnd_obj, mod_muvs_MuVisionSensor_VisionEnd);

// def MuVisionSensor.VisionGetLevel(self, vision_type)
STATIC mp_obj_t mod_muvs_MuVisionSensor_VisionGetLevel(mp_obj_t self, mp_obj_t vision_type) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(mod_muvs_MuVisionSensor_VisionGetLevel_obj, mod_muvs_MuVisionSensor_VisionGetLevel);

// def MuVisionSensor.VisionGetOutputMode(self)
STATIC mp_obj_t mod_muvs_MuVisionSensor_VisionGetOutputMode(mp_obj_t self) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(mod_muvs_MuVisionSensor_VisionGetOutputMode_obj, mod_muvs_MuVisionSensor_VisionGetOutputMode);

// def MuVisionSensor.VisionGetStatus(self, vision_type)
STATIC mp_obj_t mod_muvs_MuVisionSensor_VisionGetStatus(mp_obj_t self, mp_obj_t vision_type) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(mod_muvs_MuVisionSensor_VisionGetStatus_obj, mod_muvs_MuVisionSensor_VisionGetStatus);

// def MuVisionSensor.VisionSetDefault(self, vision_type)
STATIC mp_obj_t mod_muvs_MuVisionSensor_VisionSetDefault(mp_obj_t self, mp_obj_t vision_type) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(mod_muvs_MuVisionSensor_VisionSetDefault_obj, mod_muvs_MuVisionSensor_VisionSetDefault);

// def MuVisionSensor.VisionSetLevel(self, vision_type, level)
STATIC mp_obj_t mod_muvs_MuVisionSensor_VisionSetLevel(mp_obj_t self, mp_obj_t vision_type, mp_obj_t level) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_3(mod_muvs_MuVisionSensor_VisionSetLevel_obj, mod_muvs_MuVisionSensor_VisionSetLevel);

// def MuVisionSensor.VisionSetOutputEnable(self, vision_type, status)
STATIC mp_obj_t mod_muvs_MuVisionSensor_VisionSetOutputEnable(mp_obj_t self, mp_obj_t vision_type, mp_obj_t status) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_3(mod_muvs_MuVisionSensor_VisionSetOutputEnable_obj, mod_muvs_MuVisionSensor_VisionSetOutputEnable);

// def MuVisionSensor.VisionSetOutputMode(self, mode)
STATIC mp_obj_t mod_muvs_MuVisionSensor_VisionSetOutputMode(mp_obj_t self, mp_obj_t mode) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(mod_muvs_MuVisionSensor_VisionSetOutputMode_obj, mod_muvs_MuVisionSensor_VisionSetOutputMode);

// def MuVisionSensor.VisionSetStatus(self, vision_type, enable)
STATIC mp_obj_t mod_muvs_MuVisionSensor_VisionSetStatus(mp_obj_t self, mp_obj_t vision_type, mp_obj_t enable) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_3(mod_muvs_MuVisionSensor_VisionSetStatus_obj, mod_muvs_MuVisionSensor_VisionSetStatus);

// def MuVisionSensor.__init__(self, address)
STATIC mp_obj_t mod_muvs_MuVisionSensor_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *args) {
    mp_arg_check_num(n_args, n_kw, 1, 1, false);
    
    uint32_t address = mp_obj_get_int(args[0]);
#if Debug
    printf("address:0x%x\r\n", address);
#endif
    mp_obj_MuVisionSensor_t *o = m_new_obj(mp_obj_MuVisionSensor_t);
    o->base.type = type;
    o->address_ = address;
    MuVisionSensor Mu0(0x60);
#if Debug
    printf("Mu0 address:0x%x\r\n",&Mu0);
    printf("Mu0 size:%d bytes\r\n",sizeof(Mu0));
#endif
    o->Mu = &Mu0;
    o->Mu->begin(&ubit_i2c, kI2CMode);
    o->Mu->VisionBegin(VISION_SHAPE_CARD_DETECT);
    return MP_OBJ_FROM_PTR(o);
}

// def MuVisionSensor.begin(self, communication_port, mode)
STATIC mp_obj_t mod_muvs_MuVisionSensor_begin(mp_obj_t self, mp_obj_t mode) {
    // TODO
    mp_obj_MuVisionSensor_t *p=(mp_obj_MuVisionSensor_t*)self;
#if Debug

#endif
    uint8_t version=ubit_i2c.readRegister(0x60<<1,0x01);
    printf("version:%d\r\n",version);
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(mod_muvs_MuVisionSensor_begin_obj, mod_muvs_MuVisionSensor_begin);

// def MuVisionSensor.read(self, vision_type, object_inf, result_num=1)
STATIC mp_obj_t mod_muvs_MuVisionSensor_read(size_t n_args, const mp_obj_t *args) {
    // TODO
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mod_muvs_MuVisionSensor_read_obj, 3, 4, mod_muvs_MuVisionSensor_read);

// def MuVisionSensor.write(self, vision_type, object_inf, value)
STATIC mp_obj_t mod_muvs_MuVisionSensor_write(size_t n_args, const mp_obj_t *args) {
    // TODO
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mod_muvs_MuVisionSensor_write_obj, 4, 4, mod_muvs_MuVisionSensor_write);

// MuVisionSensor stuff

STATIC const mp_rom_map_elem_t mod_muvs_MuVisionSensor_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_CameraGetAwb), MP_ROM_PTR(&mod_muvs_MuVisionSensor_CameraGetAwb_obj) },
    { MP_ROM_QSTR(MP_QSTR_CameraGetFPS), MP_ROM_PTR(&mod_muvs_MuVisionSensor_CameraGetFPS_obj) },
    { MP_ROM_QSTR(MP_QSTR_CameraGetRotate), MP_ROM_PTR(&mod_muvs_MuVisionSensor_CameraGetRotate_obj) },
    { MP_ROM_QSTR(MP_QSTR_CameraGetZoom), MP_ROM_PTR(&mod_muvs_MuVisionSensor_CameraGetZoom_obj) },
    { MP_ROM_QSTR(MP_QSTR_CameraSetAwb), MP_ROM_PTR(&mod_muvs_MuVisionSensor_CameraSetAwb_obj) },
    { MP_ROM_QSTR(MP_QSTR_CameraSetFPS), MP_ROM_PTR(&mod_muvs_MuVisionSensor_CameraSetFPS_obj) },
    { MP_ROM_QSTR(MP_QSTR_CameraSetRotate), MP_ROM_PTR(&mod_muvs_MuVisionSensor_CameraSetRotate_obj) },
    { MP_ROM_QSTR(MP_QSTR_CameraSetZoom), MP_ROM_PTR(&mod_muvs_MuVisionSensor_CameraSetZoom_obj) },
    { MP_ROM_QSTR(MP_QSTR_GetValue), MP_ROM_PTR(&mod_muvs_MuVisionSensor_GetValue_obj) },
    { MP_ROM_QSTR(MP_QSTR_LEDsetColor), MP_ROM_PTR(&mod_muvs_MuVisionSensor_LEDsetColor_obj) },
    { MP_ROM_QSTR(MP_QSTR_LEDsetMode), MP_ROM_PTR(&mod_muvs_MuVisionSensor_LEDsetMode_obj) },
    { MP_ROM_QSTR(MP_QSTR_SensorSetDefault), MP_ROM_PTR(&mod_muvs_MuVisionSensor_SensorSetDefault_obj) },
    { MP_ROM_QSTR(MP_QSTR_SensorSetRestart), MP_ROM_PTR(&mod_muvs_MuVisionSensor_SensorSetRestart_obj) },
    { MP_ROM_QSTR(MP_QSTR_SetValue), MP_ROM_PTR(&mod_muvs_MuVisionSensor_SetValue_obj) },
    { MP_ROM_QSTR(MP_QSTR_UartSetBaudrate), MP_ROM_PTR(&mod_muvs_MuVisionSensor_UartSetBaudrate_obj) },
    { MP_ROM_QSTR(MP_QSTR_UpdateResult), MP_ROM_PTR(&mod_muvs_MuVisionSensor_UpdateResult_obj) },
    { MP_ROM_QSTR(MP_QSTR_VisionBegin), MP_ROM_PTR(&mod_muvs_MuVisionSensor_VisionBegin_obj) },
    { MP_ROM_QSTR(MP_QSTR_VisionEnd), MP_ROM_PTR(&mod_muvs_MuVisionSensor_VisionEnd_obj) },
    { MP_ROM_QSTR(MP_QSTR_VisionGetLevel), MP_ROM_PTR(&mod_muvs_MuVisionSensor_VisionGetLevel_obj) },
    { MP_ROM_QSTR(MP_QSTR_VisionGetOutputMode), MP_ROM_PTR(&mod_muvs_MuVisionSensor_VisionGetOutputMode_obj) },
    { MP_ROM_QSTR(MP_QSTR_VisionGetStatus), MP_ROM_PTR(&mod_muvs_MuVisionSensor_VisionGetStatus_obj) },
    { MP_ROM_QSTR(MP_QSTR_VisionSetDefault), MP_ROM_PTR(&mod_muvs_MuVisionSensor_VisionSetDefault_obj) },
    { MP_ROM_QSTR(MP_QSTR_VisionSetLevel), MP_ROM_PTR(&mod_muvs_MuVisionSensor_VisionSetLevel_obj) },
    { MP_ROM_QSTR(MP_QSTR_VisionSetOutputEnable), MP_ROM_PTR(&mod_muvs_MuVisionSensor_VisionSetOutputEnable_obj) },
    { MP_ROM_QSTR(MP_QSTR_VisionSetOutputMode), MP_ROM_PTR(&mod_muvs_MuVisionSensor_VisionSetOutputMode_obj) },
    { MP_ROM_QSTR(MP_QSTR_VisionSetStatus), MP_ROM_PTR(&mod_muvs_MuVisionSensor_VisionSetStatus_obj) },
    { MP_ROM_QSTR(MP_QSTR_begin), MP_ROM_PTR(&mod_muvs_MuVisionSensor_begin_obj) },
    { MP_ROM_QSTR(MP_QSTR_read), MP_ROM_PTR(&mod_muvs_MuVisionSensor_read_obj) },
    { MP_ROM_QSTR(MP_QSTR_write), MP_ROM_PTR(&mod_muvs_MuVisionSensor_write_obj) },
    

};
STATIC MP_DEFINE_CONST_DICT(mod_muvs_MuVisionSensor_locals_dict, mod_muvs_MuVisionSensor_locals_dict_table);

STATIC const mp_obj_type_t mod_muvs_MuVisionSensor_type = {
    { &mp_type_type },
    .name = MP_QSTR_MuVisionSensor,
    .print = NULL,
    .make_new = mod_muvs_MuVisionSensor_make_new,
    .call = NULL,
    .unary_op = NULL,
    .binary_op = NULL,
    .attr = NULL,
    .subscr = NULL,
    .getiter = NULL,
    .iternext = NULL,
    .buffer_p = {NULL},
    .protocol = NULL,
    .parent = NULL,
    .locals_dict = (mp_obj_dict_t*)&mod_muvs_MuVisionSensor_locals_dict,
};


// module stuff

STATIC const mp_rom_map_elem_t mp_module_muvs_globals_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_muvs) },
    { MP_ROM_QSTR(MP_QSTR_MuVisionSensor), MP_ROM_PTR(&mod_muvs_MuVisionSensor_type) },
    { MP_ROM_QSTR(MP_QSTR_I2C), MP_ROM_INT(1) },
    { MP_ROM_QSTR(MP_QSTR_Serial), MP_ROM_INT(0) },
    { MP_ROM_QSTR(MP_QSTR_VISION_COLOR_DETECT), MP_ROM_INT(1) },
    { MP_ROM_QSTR(MP_QSTR_VISION_COLOR_RECOGNITION), MP_ROM_INT(2) },
    { MP_ROM_QSTR(MP_QSTR_VISION_BALL_DETECT), MP_ROM_INT(3) },
    { MP_ROM_QSTR(MP_QSTR_VISION_BODY_DETECT), MP_ROM_INT(4) },
    { MP_ROM_QSTR(MP_QSTR_VISION_SHAPE_CARD_DETECT), MP_ROM_INT(5) },
    { MP_ROM_QSTR(MP_QSTR_VISION_TRAFFIC_CARD_DETECT), MP_ROM_INT(6) },
    { MP_ROM_QSTR(MP_QSTR_VISION_NUM_CARD_DETECT), MP_ROM_INT(7) },
    { MP_ROM_QSTR(MP_QSTR_VISION_ALL), MP_ROM_INT(8) },

};
STATIC MP_DEFINE_CONST_DICT(mp_module_muvs_globals, mp_module_muvs_globals_table);

const mp_obj_module_t mp_module_muvs = {
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t*)&mp_module_muvs_globals,
};



}
