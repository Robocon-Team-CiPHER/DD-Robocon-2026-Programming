# meshes/README.md
# Place your STL/DAE mesh exports here, referenced from r2.urdf.
# Expected files (export from your CAD tool):
#
#   base_link.stl     - Main chassis body
#   front_link.stl    - Front lifting sub-frame
#   back_link.stl     - Back  lifting sub-frame
#   fl_wheel.stl      - Front-left  mecanum wheel
#   fr_wheel.stl      - Front-right mecanum wheel
#   rl_wheel.stl      - Rear-left   mecanum wheel
#   rr_wheel.stl      - Rear-right  mecanum wheel
#   arena.stl         - Arena reference (copy from /media/...)
#
# After placing files, update the URDF mesh tags, e.g.:
#   <mesh filename="package://r2_description/meshes/base_link.stl"/>
