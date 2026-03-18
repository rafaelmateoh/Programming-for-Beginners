import re
#
def analyze_log(file_path):
    failed_attempts = 0
    suspicious_ips = {}

    with open(file_path, "r") as file:
        for line in file:
            if "Failed" in line or "failed" in line:
                failed_attempts += 1

                ip_match = re.search(r'\b(?:[0-9]{1,3}\.){3}[0-9]{1,3}\b', line)
                if ip_match:
                    ip = ip_match.group()
                    suspicious_ips[ip] = suspicious_ips.get(ip, 0) + 1

    print(f"\nTotal Failed Attempts: {failed_attempts}\n")

    print("Suspicious IPs:")
    for ip, count in suspicious_ips.items():
        print(f"{ip} -> {count} attempts")


if __name__ == "__main__":
    log_file = input("Enter log file path: ")
    analyze_log(log_file)
