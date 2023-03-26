/*
 * Copyright (c) 2021 Nordic Semiconductor ASA
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/drivers/sensor.h>
#include <zephyr/kernel.h>

#include "app_version.h"

#include <synapse_protobuf/twist.pb.h>

#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(main, CONFIG_APP_LOG_LEVEL);

void main(void)
{
    // int ret;
    // const struct device *sensor;

    printk("Cerebri %s\n", APP_VERSION_STR);

    Twist twist = Twist_init_zero;
    twist.has_linear = true;
    twist.linear.x = 1;
    twist.angular.x = 1;

    /*
    sensor = DEVICE_DT_GET(DT_NODELABEL(examplesensor0));
    if (!device_is_ready(sensor)) {
            LOG_ERR("Sensor not ready");
            return;
    }

    while (1) {
            struct sensor_value val;

            ret = sensor_sample_fetch(sensor);
            if (ret < 0) {
                    LOG_ERR("Could not fetch sample (%d)", ret);
                    return;
            }

            ret = sensor_channel_get(sensor, SENSOR_CHAN_PROX, &val);
            if (ret < 0) {
                    LOG_ERR("Could not get sample (%d)", ret);
                    return;
            }

            printk("Sensor value: %d\n", val.val1);

            k_sleep(K_MSEC(1000));
    }
    */
}
