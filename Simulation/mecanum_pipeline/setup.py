import os
from glob import glob
from setuptools import find_packages, setup

package_name = 'mecanum_pipeline'

setup(
    name=package_name,
    version='1.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        # Include launch files
        (os.path.join('share', package_name, 'launch'),
            glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='tejas-raut',
    maintainer_email='tejas.p.raut15@gmail.com',
    description='Mecanum robot pipeline: TurtleSim test + odometry',
    license='MIT',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'turtle_data_publisher = mecanum_pipeline.turtle_data_publisher:main',
            'odometry_node = mecanum_pipeline.odometry_node:main',
            'esp32_simulator_node = mecanum_pipeline.esp32_simulator_node:main',
        ],
    },
)
