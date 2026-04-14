# Hệ thống giám sát nhiệt độ đa kênh LM35

## 1. Giới thiệu
Dự án sử dụng Arduino/ESP32 để đọc dữ liệu từ nhiều cảm biến nhiệt độ LM35 và xuất dữ liệu lên máy tính thông qua giao tiếp Serial.

## 2. Tính năng
* Đọc dữ liệu nhiệt độ thời gian thực từ 2 kênh cảm biến (A0, A1).
* Chuyển đổi giá trị ADC sang độ C với độ chính xác cao.
* Xuất dữ liệu định dạng CSV để dễ dàng xử lý bằng Excel hoặc Python.

## 3. Danh sách phần cứng
| STT | Linh kiện | Số lượng | Ghi chú |
|---|---|---|---|
| 1 | Arduino Uno / ESP32 | 01 | Board mạch điều khiển chính |
| 2 | Cảm biến LM35 | 02 | Dải đo 0 - 150°C |
| 3 | Dây cắm (Jumper) | 01 bộ | Kết nối linh kiện |

## 4. Cấu trúc thư mục
```text
Arduino_LM35_TempMonitor/
├── firmware/
│   └── LM35_TempReader/
│       └── LM35_TempReader.ino   # Mã nguồn chính
└── README.md                     # Tài liệu hướng dẫn
Họ và tên: [Lê Nhựt Trường]

MSSV: [N23DCCI074]

Lớp: [D23CQCI01-N]