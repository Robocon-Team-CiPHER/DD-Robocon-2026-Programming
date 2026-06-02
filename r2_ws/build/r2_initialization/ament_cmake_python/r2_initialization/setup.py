from setuptools import find_packages
from setuptools import setup

setup(
    name='r2_initialization',
    version='1.0.0',
    packages=find_packages(
        include=('r2_initialization', 'r2_initialization.*')),
)
