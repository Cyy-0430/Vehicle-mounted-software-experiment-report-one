//
// Created by Zephyrus-Desktop on 2024/10/5.
//

#ifndef SMART_CAR_H
#define SMART_CAR_H

#include <string>

using std::string;

struct Tyre {
    string model;
    std::string size;
};

struct Chassis {
    string id;
    string wheel_base;
    string wheel_track;
    string minimum_ground_clearance;
    string minimum_turning_radius;
    string driving_form;
    string maximum_stroke;
    Tyre tyre[3];
};

struct AGXKit {
    string model;
    string ai;
    int cuda_cores;
    int tensor_core;
    string video_memory;
    string storage;
};

struct StereoVisionCamera {
    string model;
    string camera;
    string rgb_frame_resolution;
    int rgb_fps;
    string fov;
    int deep_fps;
};

struct MultiLineLidar {
    string model;
    int channel;
    string test_range;
    string power;
};

struct NineAxisGyroscope {
    string model;
    string manufacturers;
};

struct LCD {
    double size;
    string model;
};

struct BatteryModule {
    string parameter;
    string external_power_supply;
    string charging_time;
};

struct SmartCar {
    string id;
    Chassis chassis;
    AGXKit agx_kit;
    StereoVisionCamera stereo_camera;
    MultiLineLidar multi_line_lidar;
    NineAxisGyroscope nine_axis_gyroscope;
    BatteryModule battery_module;
};

#endif //SMART_CAR_H
