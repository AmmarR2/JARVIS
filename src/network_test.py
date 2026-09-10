from urllib.request import urlopen

ESP32_URL = "http://192.168.1.88/"


def main():
    print(f"Connecting to JARVIS at {ESP32_URL}...")

    try:
        with urlopen(ESP32_URL, timeout=5) as response:
            message = response.read().decode("utf-8")
            print(f"ESP32 replied: {message}")
    except Exception as exc:
        print(f"Connection failed: {exc}")


if __name__ == "__main__":
    main()
