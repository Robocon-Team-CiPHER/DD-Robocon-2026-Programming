    # =========================
    # JOINT STATE BROADCASTER
    # =========================

    joint_state_broadcaster_spawner = Node(
        package='controller_manager',
        executable='spawner',

        arguments=[
            'joint_state_broadcaster'
        ],

        output='screen'
    )

    # =========================
    # MECANUM CONTROLLER
    # =========================

    mecanum_controller_spawner = Node(
        package='controller_manager',
        executable='spawner',

        arguments=[
            'mecanum_controller'
        ],

        output='screen'
    )

    # =========================
    # STEP CONTROLLER
    # =========================

    step_controller_spawner = Node(
        package='controller_manager',
        executable='spawner',

        arguments=[
            'step_controller'
        ],

        output='screen'
    )

    # =========================
    # VERTICAL EXPANDABLE
    # =========================

    vertical_expandable_controller_spawner = Node(
        package='controller_manager',
        executable='spawner',

        arguments=[
            'vertical_expandable_controller'
        ],

        output='screen'
    )

    # =========================
    # VERTICAL GANTRY
    # =========================

    vertical_gantry_controller_spawner = Node(
        package='controller_manager',
        executable='spawner',

        arguments=[
            'vertical_gantry_controller'
        ],

        output='screen'
    )

    # =========================
    # HORIZONTAL GANTRY
    # =========================

    horizontal_gantry_controller_spawner = Node(
        package='controller_manager',
        executable='spawner',

        arguments=[
            'horizontal_gantry_controller'
        ],

        output='screen'
    )

    # =========================
    # KFS GRIPPER CONTROLLER
    # =========================

    kfs_gripper_spawner = Node(
        package='controller_manager',
        executable='spawner',

        arguments=[
            'kfs_gripper_controller'
        ],

        output='screen'
    )

    # =========================
    # SPEARHEAD CONTROLLER
    # =========================

    spearhead_gripper_spawner = Node(
        package='controller_manager',
        executable='spawner',

        arguments=[
            'spearhead_gripper_controller'
        ],

        output='screen'
    )

// in return LaunchDescription([])
TimerAction(
            period=5.0,

            actions=[

                joint_state_broadcaster_spawner,

                mecanum_controller_spawner,

                step_controller_spawner,

                vertical_expandable_controller_spawner,

                vertical_gantry_controller_spawner,

                horizontal_gantry_controller_spawner,
                
                kfs_gripper_spawner,
                
                spearhead_gripper_spawner

            ]
        )