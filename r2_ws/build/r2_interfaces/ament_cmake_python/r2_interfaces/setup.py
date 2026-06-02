from setuptools import find_packages
from setuptools import setup

setup(
    name='r2_interfaces',
    version='1.0.0',
    packages=find_packages(
        include=('r2_interfaces', 'r2_interfaces.*')),
)
