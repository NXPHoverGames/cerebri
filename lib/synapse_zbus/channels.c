#include "synapse_zbus/channels.h"

ZBUS_CHAN_DEFINE(chan_in_cmd_vel, // Name
    Twist, // Message type
    NULL, // Validator
    NULL, // User Data
    ZBUS_OBSERVERS(), // observers
    ZBUS_MSG_INIT(0) // Initial value {0}
);

ZBUS_CHAN_DEFINE(chan_in_joy, // Name
    Joy, // Message type
    NULL, // Validator
    NULL, // User Data
    ZBUS_OBSERVERS(), // observers
    ZBUS_MSG_INIT(0) // Initial value {0}
);

ZBUS_CHAN_DEFINE(chan_in_odometry, // Name
    Joy, // Message type
    NULL, // Validator
    NULL, // User Data
    ZBUS_OBSERVERS(), // observers
    ZBUS_MSG_INIT(0) // Initial value {0}
);

ZBUS_CHAN_DEFINE(chan_in_bezier_trajectory, // Name
    BezierTrajectory, // Message type
    NULL, // Validator
    NULL, // User Data
    ZBUS_OBSERVERS(), // observers
    ZBUS_MSG_INIT(0) // Initial value {0}
);

ZBUS_CHAN_DEFINE(chan_out_actuators, // Name
    Actuators, // Message type
    NULL, // Validator
    NULL, // User Data
    ZBUS_OBSERVERS(), // observers
    ZBUS_MSG_INIT(0) // Initial value {0}
);