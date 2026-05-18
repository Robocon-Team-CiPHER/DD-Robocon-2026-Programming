# #only run for our webcam
# from ultralytics import YOLO
# import cv2
# import torch

# # Device
# device = "mps" if torch.backends.mps.is_available() else "cpu"

# # Load model
# model = YOLO("/Users/sk/Desktop/yolokfs/best.pt")

# # Webcam
# cap = cv2.VideoCapture(0)

# while True:
#     ret, frame = cap.read()

#     if not ret:
#         break

#     h, w, _ = frame.shape

#     # -----------------------------
#     # PICKUP ZONE (imaginary box)
#     # -----------------------------
#     zone_x1 = int(w * 0.35)
#     zone_y1 = int(h * 0.35)

#     zone_x2 = int(w * 0.65)
#     zone_y2 = int(h * 0.65)

#     # Draw pickup zone
#     cv2.rectangle(
#         frame,
#         (zone_x1, zone_y1),
#         (zone_x2, zone_y2),
#         (0, 255, 0),
#         2
#     )

#     # Run YOLO
#     results = model(frame, device=device)

#     annotated = results[0].plot()

#     # Check detections
#     for box in results[0].boxes:

#         cls_id = int(box.cls[0])
#         class_name = model.names[cls_id]

#         # Bounding box coordinates
#         x1, y1, x2, y2 = map(int, box.xyxy[0])

#         # Object center
#         cx = (x1 + x2) // 2
#         cy = (y1 + y2) // 2

#         # Draw center point
#         cv2.circle(annotated, (cx, cy), 5, (255, 0, 0), -1)

#         # Check if inside pickup zone
#         inside_zone = (
#             zone_x1 < cx < zone_x2 and
#             zone_y1 < cy < zone_y2
#         )

#         if inside_zone and class_name == "Real_KFS":

#             cv2.putText(
#                 annotated,
#                 "PICK OBJECT",
#                 (50, 50),
#                 cv2.FONT_HERSHEY_SIMPLEX,
#                 1,
#                 (0, 255, 0),
#                 3
#             )

#             print("Pick object")

#     # Draw pickup zone again on final frame
#     cv2.rectangle(
#         annotated,
#         (zone_x1, zone_y1),
#         (zone_x2, zone_y2),
#         (0, 255, 0),
#         2
#     )

#     cv2.imshow("YOLO Pickup Zone", annotated)

#     if cv2.waitKey(1) & 0xFF == ord('q'):
#         break

# cap.release()
# cv2.destroyAllWindows()




# from ultralytics import YOLO
# import cv2
# import torch

# # Device
# device = "mps" if torch.backends.mps.is_available() else "cpu"

# # Load model
# model = YOLO("/Users/sk/Desktop/yolokfs/best.pt")

# # Webcam
# cap = cv2.VideoCapture(0)

# while True:
#     ret, frame = cap.read()

#     if not ret:
#         break

#     h, w, _ = frame.shape

#     # -----------------------------
#     # PICKUP ZONE
#     # -----------------------------
#     zone_x1 = int(w * 0.35)
#     zone_y1 = int(h * 0.25)

#     zone_x2 = int(w * 0.65)
#     zone_y2 = int(h * 0.75)

#     # Draw pickup zone
#     cv2.rectangle(
#         frame,
#         (zone_x1, zone_y1),
#         (zone_x2, zone_y2),
#         (0, 255, 0),
#         3
#     )

#     # YOLO detection
#     results = model(frame, device=device)

#     annotated = results[0].plot()

#     for box in results[0].boxes:

#         cls_id = int(box.cls[0])
#         class_name = model.names[cls_id]

#         x1, y1, x2, y2 = map(int, box.xyxy[0])

#         # Object center
#         cx = (x1 + x2) // 2
#         cy = (y1 + y2) // 2

#         # Bounding box size in pixels
#         bw = x2 - x1
#         bh = y2 - y1

#         # Draw center point
#         cv2.circle(annotated, (cx, cy), 5, (255, 0, 0), -1)

#         # Check if object center inside pickup zone
#         inside_zone = (
#             zone_x1 < cx < zone_x2 and
#             zone_y1 < cy < zone_y2
#         )

#         # Approximate expected box size
#         # (You will tune these experimentally)
#         correct_size = (
#             180 < bw < 260 and
#             180 < bh < 260
#         )

#         if (
#             inside_zone and
#             correct_size and
#             class_name == "Real_KFS"
#         ):

#             cv2.putText(
#                 annotated,
#                 "PICK OBJECT",
#                 (50, 50),
#                 cv2.FONT_HERSHEY_SIMPLEX,
#                 1,
#                 (0, 255, 0),
#                 3
#             )

#             print("Pick object")

#     # Draw pickup zone again
#     cv2.rectangle(
#         annotated,
#         (zone_x1, zone_y1),
#         (zone_x2, zone_y2),
#         (0, 255, 0),
#         3
#     )

#     cv2.imshow("Pickup Zone", annotated)

#     if cv2.waitKey(1) & 0xFF == ord('q'):
#         break

# cap.release()
# cv2.destroyAllWindows()

# from ultralytics import YOLO
# import cv2
# import torch

# # Select device
# device = "mps" if torch.backends.mps.is_available() else "cpu"

# # Load trained model
<<<<<<< HEAD
# model = YOLO("/home/sam/DD-Robocon-2026-Programming/OpenCV/yolokfs/best.pt")

# # Phone camera stream URL
# url = "http://10.122.68.179:8080/video"

# # Open stream
# cap = cv2.VideoCapture(url)

# while True:

#     ret, frame = cap.read()

#     if not ret:
#         break

#     # Run YOLO
#     results = model(frame, device=device)

#     # Draw detections
#     annotated = results[0].plot()

#     cv2.imshow("Phone Camera Detection", annotated)

#     # Press q to quit
#     if cv2.waitKey(1) & 0xFF == ord('q'):
#         break

# cap.release()
# cv2.destroyAllWindows()



##normal  web cam settings
# from ultralytics import YOLO
# import cv2
# import torch

# # Select device
# device = "mps" if torch.backends.mps.is_available() else "cpu"

# # Load trained model
# model = YOLO("/Users/sk/Desktop/yolokfs/best.pt")

# # Phone camera stream URL
# url = "http://10.24.244.126:8080/video"

# # Open stream
# cap = cv2.VideoCapture(url)

# while True:

#     ret, frame = cap.read()

#     if not ret:
#         break

#     # OPTIONAL: rotate if phone stream tilted
#    #frame = cv2.rotate(frame, cv2.ROTATE_90_CLOCKWISE)

#     h, w, _ = frame.shape

#     # ---------------------------------
#     # IMAGINARY PICKUP ZONE
#     # ---------------------------------
#     zone_x1 = int(w * 0.35)
#     zone_y1 = int(h * 0.25)

#     zone_x2 = int(w * 0.65)
#     zone_y2 = int(h * 0.75)

#     # Draw pickup zone
#     cv2.rectangle(
#         frame,
#         (zone_x1, zone_y1),
#         (zone_x2, zone_y2),
#         (0, 255, 0),
#         3
#     )

#     # Run YOLO
#     results = model(frame, device=device)

#     # Draw detections
#     annotated = results[0].plot()

#     for box in results[0].boxes:

#         cls_id = int(box.cls[0])
#         class_name = model.names[cls_id]

#         x1, y1, x2, y2 = map(int, box.xyxy[0])

#         # Object center
#         cx = (x1 + x2) // 2
#         cy = (y1 + y2) // 2

#         # Draw center point
#         cv2.circle(annotated, (cx, cy), 5, (255, 0, 0), -1)

#         # Check if object center is inside pickup zone
#         inside_zone = (
#             zone_x1 < cx < zone_x2 and
#             zone_y1 < cy < zone_y2
#         )

#         # If Real_KFS enters zone
#         if inside_zone and class_name == "Real_KFS":

#             cv2.putText(
#                 annotated,
#                 "PICK OBJECT",
#                 (50, 50),
#                 cv2.FONT_HERSHEY_SIMPLEX,
#                 1,
#                 (0, 255, 0),
#                 3
#             )

#             print("Pick object")

#         elif inside_zone and class_name == "Fake_KFS":

#             cv2.putText(
#                 annotated,
#                 "FAKE OBJECT",
#                 (50, 100),
#                 cv2.FONT_HERSHEY_SIMPLEX,
#                 1,
#                 (0, 0, 255),
#                 3
#             )

#     # Draw pickup zone again on final frame
#     cv2.rectangle(
#         annotated,
#         (zone_x1, zone_y1),
#         (zone_x2, zone_y2),
#         (0, 255, 0),
#         3
#     )

#     cv2.imshow("Phone Camera Pickup Zone", annotated)

#     # Press q to quit
#     if cv2.waitKey(1) & 0xFF == ord('q'):
#         break

# cap.release()
# cv2.destroyAllWindows()





# #phone upright
# from ultralytics import YOLO
# import cv2
# import torch

# # Select device
# device = "mps" if torch.backends.mps.is_available() else "cpu"

# # Load trained model
# model = YOLO("/Users/sk/Desktop/yolokfs/best.pt")

# # Phone camera stream URL
# url = "http://10.24.244.126:8080/video"

# # Open stream
# cap = cv2.VideoCapture(url)

# while True:

#     ret, frame = cap.read()

#     if not ret:
#         break

#     # OPTIONAL: rotate if phone stream tilted
#     frame = cv2.rotate(frame, cv2.ROTATE_90_CLOCKWISE)

#     h, w, _ = frame.shape

#     # ---------------------------------
#     # IMAGINARY PICKUP ZONE
#     # ---------------------------------
#    # ---------------------------------
# # CENTER PICKUP BOX
# # ---------------------------------

#     box_size = 300   # change size if needed

#     center_x = w // 2
#     center_y = h // 2

#     zone_x1 = center_x - box_size // 2
#     zone_y1 = center_y - box_size // 2

#     zone_x2 = center_x + box_size // 2
#     zone_y2 = center_y + box_size // 2

#     # Draw pickup zone
#     cv2.rectangle(
#         frame,
#         (zone_x1, zone_y1),
#         (zone_x2, zone_y2),
#         (0, 255, 0),
#         3
#     )

#     # Run YOLO
#     results = model(frame, device=device)

#     # Draw detections
#     annotated = results[0].plot()

#     for box in results[0].boxes:

#         cls_id = int(box.cls[0])
#         class_name = model.names[cls_id]

#         x1, y1, x2, y2 = map(int, box.xyxy[0])

#         # Object center
#         cx = (x1 + x2) // 2
#         cy = (y1 + y2) // 2

#         # Draw center point
#         cv2.circle(annotated, (cx, cy), 5, (255, 0, 0), -1)

#         # Check if object center is inside pickup zone
#         inside_zone = (
#             zone_x1 < cx < zone_x2 and
#             zone_y1 < cy < zone_y2
#         )

#         # If Real_KFS enters zone
#         if inside_zone and class_name == "Real_KFS":

#             cv2.putText(
#                 annotated,
#                 "PICK OBJECT",
#                 (50, 50),
#                 cv2.FONT_HERSHEY_SIMPLEX,
#                 1,
#                 (0, 255, 0),
#                 3
#             )

#             print("Pick object")

#         elif inside_zone and class_name == "Fake_KFS":

#             cv2.putText(
#                 annotated,
#                 "FAKE OBJECT",
#                 (50, 100),
#                 cv2.FONT_HERSHEY_SIMPLEX,
#                 1,
#                 (0, 0, 255),
#                 3
#             )

#     # Draw pickup zone again on final frame
#     cv2.rectangle(
#         annotated,
#         (zone_x1, zone_y1),
#         (zone_x2, zone_y2),
#         (0, 255, 0),
#         3
#     )

#     cv2.imshow("Phone Camera Pickup Zone", annotated)

#     # Press q to quit
#     if cv2.waitKey(1) & 0xFF == ord('q'):
#         break

# cap.release()
# cv2.destroyAllWindows()


# #only run for our webcam
# from ultralytics import YOLO
# import cv2
# import torch

# # Device
# device = "mps" if torch.backends.mps.is_available() else "cpu"

# # Load model
# model = YOLO("/Users/sk/Desktop/yolokfs/best.pt")

# # Webcam  
# cap = cv2.VideoCapture(0)

# while True:
#     ret, frame = cap.read()

#     if not ret:
#         break

#     h, w, _ = frame.shape

#     # -----------------------------
#     # PICKUP ZONE (imaginary box)
#     # -----------------------------
#     zone_x1 = int(w * 0.35)
#     zone_y1 = int(h * 0.35)

#     zone_x2 = int(w * 0.65)
#     zone_y2 = int(h * 0.65)

#     # Draw pickup zone
#     cv2.rectangle(
#         frame,
#         (zone_x1, zone_y1),
#         (zone_x2, zone_y2),
#         (0, 255, 0),
#         2
#     )

#     # Run YOLO
#     results = model(frame, device=device)

#     annotated = results[0].plot()

#     # Check detections
#     for box in results[0].boxes:

#         cls_id = int(box.cls[0])
#         class_name = model.names[cls_id]

#         # Bounding box coordinates
#         x1, y1, x2, y2 = map(int, box.xyxy[0])

#         # Object center
#         cx = (x1 + x2) // 2
#         cy = (y1 + y2) // 2

#         # Draw center point
#         cv2.circle(annotated, (cx, cy), 5, (255, 0, 0), -1)

#         # Check if inside pickup zone
#         inside_zone = (
#             zone_x1 < cx < zone_x2 and
#             zone_y1 < cy < zone_y2
#         )

#         if inside_zone and class_name == "Real_KFS":

#             cv2.putText(
#                 annotated,
#                 "PICK OBJECT",
#                 (50, 50),
#                 cv2.FONT_HERSHEY_SIMPLEX,
#                 1,
#                 (0, 255, 0),
#                 3
#             )

#             print("Pick object")

#     # Draw pickup zone again on final frame
#     cv2.rectangle(
#         annotated,
#         (zone_x1, zone_y1),
#         (zone_x2, zone_y2),
#         (0, 255, 0),
#         2
#     )

#     cv2.imshow("YOLO Pickup Zone", annotated)

#     if cv2.waitKey(1) & 0xFF == ord('q'):
#         break

# cap.release()
# cv2.destroyAllWindows()




# from ultralytics import YOLO
# import cv2
# import torch

# # Device
# device = "mps" if torch.backends.mps.is_available() else "cpu"

# # Load model
# model = YOLO("/Users/sk/Desktop/yolokfs/best.pt")

# # Webcam
# cap = cv2.VideoCapture(0)

# while True:
#     ret, frame = cap.read()

#     if not ret:
#         break

#     h, w, _ = frame.shape

#     # -----------------------------
#     # PICKUP ZONE
#     # -----------------------------
#     zone_x1 = int(w * 0.35)
#     zone_y1 = int(h * 0.25)

#     zone_x2 = int(w * 0.65)
#     zone_y2 = int(h * 0.75)

#     # Draw pickup zone
#     cv2.rectangle(
#         frame,
#         (zone_x1, zone_y1),
#         (zone_x2, zone_y2),
#         (0, 255, 0),
#         3
#     )

#     # YOLO detection
#     results = model(frame, device=device)

#     annotated = results[0].plot()

#     for box in results[0].boxes:

#         cls_id = int(box.cls[0])
#         class_name = model.names[cls_id]

#         x1, y1, x2, y2 = map(int, box.xyxy[0])

#         # Object center
#         cx = (x1 + x2) // 2
#         cy = (y1 + y2) // 2

#         # Bounding box size in pixels
#         bw = x2 - x1
#         bh = y2 - y1

#         # Draw center point
#         cv2.circle(annotated, (cx, cy), 5, (255, 0, 0), -1)

#         # Check if object center inside pickup zone
#         inside_zone = (
#             zone_x1 < cx < zone_x2 and
#             zone_y1 < cy < zone_y2
#         )

#         # Approximate expected box size
#         # (You will tune these experimentally)
#         correct_size = (
#             180 < bw < 260 and
#             180 < bh < 260
#         )

#         if (
#             inside_zone and
#             correct_size and
#             class_name == "Real_KFS"
#         ):

#             cv2.putText(
#                 annotated,
#                 "PICK OBJECT",
#                 (50, 50),
#                 cv2.FONT_HERSHEY_SIMPLEX,
#                 1,
#                 (0, 255, 0),
#                 3
#             )

#             print("Pick object")

#     # Draw pickup zone again
#     cv2.rectangle(
#         annotated,
#         (zone_x1, zone_y1),
#         (zone_x2, zone_y2),
#         (0, 255, 0),
#         3
#     )

#     cv2.imshow("Pickup Zone", annotated)

#     if cv2.waitKey(1) & 0xFF == ord('q'):
#         break

# cap.release()
# cv2.destroyAllWindows()

# from ultralytics import YOLO
# import cv2
# import torch

# # Select device
# device = "mps" if torch.backends.mps.is_available() else "cpu"

# # Load trained model
=======
>>>>>>> refs/remotes/origin/ROS-implementation
# model = YOLO("/Users/sk/Desktop/yolokfs/best.pt")

# # Phone camera stream URL
# url = "http://10.228.138.209:8080/video"

# # Open stream
# cap = cv2.VideoCapture(url)

# while True:

#     ret, frame = cap.read()

#     if not ret:
#         break

#     # Run YOLO
#     results = model(frame, device=device)

#     # Draw detections
#     annotated = results[0].plot()

#     cv2.imshow("Phone Camera Detection", annotated)

#     # Press q to quit
#     if cv2.waitKey(1) & 0xFF == ord('q'):
#         break

# cap.release()
# cv2.destroyAllWindows()



##normal  web cam settings
# from ultralytics import YOLO
# import cv2
# import torch

# # Select device
# device = "mps" if torch.backends.mps.is_available() else "cpu"

# # Load trained model
# model = YOLO("/Users/sk/Desktop/yolokfs/best.pt")

# # Phone camera stream URL
# url = "http://10.24.244.126:8080/video"

# # Open stream
# cap = cv2.VideoCapture(url)

# while True:

#     ret, frame = cap.read()

#     if not ret:
#         break

#     # OPTIONAL: rotate if phone stream tilted
#    #frame = cv2.rotate(frame, cv2.ROTATE_90_CLOCKWISE)

#     h, w, _ = frame.shape

#     # ---------------------------------
#     # IMAGINARY PICKUP ZONE
#     # ---------------------------------
#     zone_x1 = int(w * 0.35)
#     zone_y1 = int(h * 0.25)

#     zone_x2 = int(w * 0.65)
#     zone_y2 = int(h * 0.75)

#     # Draw pickup zone
#     cv2.rectangle(
#         frame,
#         (zone_x1, zone_y1),
#         (zone_x2, zone_y2),
#         (0, 255, 0),
#         3
#     )

#     # Run YOLO
#     results = model(frame, device=device)

#     # Draw detections
#     annotated = results[0].plot()

#     for box in results[0].boxes:

#         cls_id = int(box.cls[0])
#         class_name = model.names[cls_id]

#         x1, y1, x2, y2 = map(int, box.xyxy[0])

#         # Object center
#         cx = (x1 + x2) // 2
#         cy = (y1 + y2) // 2

#         # Draw center point
#         cv2.circle(annotated, (cx, cy), 5, (255, 0, 0), -1)

#         # Check if object center is inside pickup zone
#         inside_zone = (
#             zone_x1 < cx < zone_x2 and
#             zone_y1 < cy < zone_y2
#         )

#         # If Real_KFS enters zone
#         if inside_zone and class_name == "Real_KFS":

#             cv2.putText(
#                 annotated,
#                 "PICK OBJECT",
#                 (50, 50),
#                 cv2.FONT_HERSHEY_SIMPLEX,
#                 1,
#                 (0, 255, 0),
#                 3
#             )

#             print("Pick object")

#         elif inside_zone and class_name == "Fake_KFS":

#             cv2.putText(
#                 annotated,
#                 "FAKE OBJECT",
#                 (50, 100),
#                 cv2.FONT_HERSHEY_SIMPLEX,
#                 1,
#                 (0, 0, 255),
#                 3
#             )

#     # Draw pickup zone again on final frame
#     cv2.rectangle(
#         annotated,
#         (zone_x1, zone_y1),
#         (zone_x2, zone_y2),
#         (0, 255, 0),
#         3
#     )

#     cv2.imshow("Phone Camera Pickup Zone", annotated)

#     # Press q to quit
#     if cv2.waitKey(1) & 0xFF == ord('q'):
#         break

# cap.release()
# cv2.destroyAllWindows()





# #phone upright
# from ultralytics import YOLO
# import cv2
# import torch

# # Select device
# device = "mps" if torch.backends.mps.is_available() else "cpu"

# # Load trained model
# model = YOLO("/Users/sk/Desktop/yolokfs/best.pt")

# # Phone camera stream URL
# url = "http://10.24.244.126:8080/video"

# # Open stream
# cap = cv2.VideoCapture(url)

# while True:

#     ret, frame = cap.read()

#     if not ret:
#         break

#     # OPTIONAL: rotate if phone stream tilted
#     frame = cv2.rotate(frame, cv2.ROTATE_90_CLOCKWISE)

#     h, w, _ = frame.shape

#     # ---------------------------------
#     # IMAGINARY PICKUP ZONE
#     # ---------------------------------
#    # ---------------------------------
# # CENTER PICKUP BOX
# # ---------------------------------

#     box_size = 300   # change size if needed

#     center_x = w // 2
#     center_y = h // 2

#     zone_x1 = center_x - box_size // 2
#     zone_y1 = center_y - box_size // 2

#     zone_x2 = center_x + box_size // 2
#     zone_y2 = center_y + box_size // 2

#     # Draw pickup zone
#     cv2.rectangle(
#         frame,
#         (zone_x1, zone_y1),
#         (zone_x2, zone_y2),
#         (0, 255, 0),
#         3
#     )

#     # Run YOLO
#     results = model(frame, device=device)

#     # Draw detections
#     annotated = results[0].plot()

#     for box in results[0].boxes:

#         cls_id = int(box.cls[0])
#         class_name = model.names[cls_id]

#         x1, y1, x2, y2 = map(int, box.xyxy[0])

#         # Object center
#         cx = (x1 + x2) // 2
#         cy = (y1 + y2) // 2

#         # Draw center point
#         cv2.circle(annotated, (cx, cy), 5, (255, 0, 0), -1)

#         # Check if object center is inside pickup zone
#         inside_zone = (
#             zone_x1 < cx < zone_x2 and
#             zone_y1 < cy < zone_y2
#         )

#         # If Real_KFS enters zone
#         if inside_zone and class_name == "Real_KFS":

#             cv2.putText(
#                 annotated,
#                 "PICK OBJECT",
#                 (50, 50),
#                 cv2.FONT_HERSHEY_SIMPLEX,
#                 1,
#                 (0, 255, 0),
#                 3
#             )

#             print("Pick object")

#         elif inside_zone and class_name == "Fake_KFS":

#             cv2.putText(
#                 annotated,
#                 "FAKE OBJECT",
#                 (50, 100),
#                 cv2.FONT_HERSHEY_SIMPLEX,
#                 1,
#                 (0, 0, 255),
#                 3
#             )

#     # Draw pickup zone again on final frame
#     cv2.rectangle(
#         annotated,
#         (zone_x1, zone_y1),
#         (zone_x2, zone_y2),
#         (0, 255, 0),
#         3
#     )

#     cv2.imshow("Phone Camera Pickup Zone", annotated)

#     # Press q to quit
#     if cv2.waitKey(1) & 0xFF == ord('q'):
#         break

# cap.release()
# cv2.destroyAllWindows()
<<<<<<< HEAD




#background is blurred out except for center box
from ultralytics import YOLO
import cv2
import torch
import numpy as np

# Device
device = "mps" if torch.backends.mps.is_available() else "cpu"

# Load model
model = YOLO("/home/sam/DD-Robocon-2026-Programming/OpenCV/yolokfs/best.pt")

# Phone stream
url = "https://10.122.68.179:8080/video"

cap = cv2.VideoCapture(url)

while True:

    ret, frame = cap.read()

    if not ret:
        break

    # # Rotate if needed
    # frame = cv2.rotate(frame, cv2.ROTATE_90_CLOCKWISE)

    h, w, _ = frame.shape

    # ---------------------------------
    # CENTER PICKUP BOX
    # ---------------------------------

    box_size = 350

    center_x = w // 2
    center_y = h // 2

    zone_x1 = center_x - box_size // 2
    zone_y1 = center_y - box_size // 2

    zone_x2 = center_x + box_size // 2
    zone_y2 = center_y + box_size // 2

    # ---------------------------------
    # BLUR OUTSIDE REGION
    # ---------------------------------

    blurred = cv2.GaussianBlur(frame, (31, 31), 0)

    # Keep center region clear
    blurred[zone_y1:zone_y2, zone_x1:zone_x2] = \
        frame[zone_y1:zone_y2, zone_x1:zone_x2]

    frame = blurred

    # Draw pickup zone
    cv2.rectangle(
        frame,
        (zone_x1, zone_y1),
        (zone_x2, zone_y2),
        (0, 255, 0),
        3
    )

    # ---------------------------------
    # RUN YOLO
    # ---------------------------------

    results = model(
        frame,
        device=device,
        conf=0.7
    )

    annotated = results[0].plot()

    for box in results[0].boxes:

        cls_id = int(box.cls[0])
        class_name = model.names[cls_id]

        x1, y1, x2, y2 = map(int, box.xyxy[0])

        # Object center
        cx = (x1 + x2) // 2
        cy = (y1 + y2) // 2

        # ONLY allow detections INSIDE zone
        inside_zone = (
            zone_x1 < cx < zone_x2 and
            zone_y1 < cy < zone_y2
        )

        if inside_zone:

            cv2.circle(
                annotated,
                (cx, cy),
                5,
                (255, 0, 0),
                -1
            )

            if class_name == "Real_KFS":

                cv2.putText(
                    annotated,
                    "PICK OBJECT",
                    (50, 50),
                    cv2.FONT_HERSHEY_SIMPLEX,
                    1,
                    (0, 255, 0),
                    3
                )

                print("Pick object")

            elif class_name == "Fake_KFS":

                cv2.putText(
                    annotated,
                    "FAKE OBJECT",
                    (50, 100),
                    cv2.FONT_HERSHEY_SIMPLEX,
                    1,
                    (0, 0, 255),
                    3
                )

    # Draw zone again
    cv2.rectangle(
        annotated,
        (zone_x1, zone_y1),
        (zone_x2, zone_y2),
        (0, 255, 0),
        3
    )

    cv2.imshow("Phone Camera Pickup Zone", annotated)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
=======
>>>>>>> refs/remotes/origin/ROS-implementation
