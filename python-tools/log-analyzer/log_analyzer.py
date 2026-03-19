import re

THRESHOLD = 3  # flag IPs with 3 or more failed attempts


def extract_ip(line):
    match = re.search(r"\b(?:[0-9]{1,3}\.){3}[0-9]{1,3}\b", line)
    return match.group() if match else None


def analyze_log(file_path):
    failed_attempts = 0
    successful_attempts = 0
    failed_ips = {}
    successful_ips = {}

    with open(file_path, "r") as file:
        for line in file:
            ip = extract_ip(line)
            if not ip:
                continue

            if "Failed" in line or "failed" in line:
                failed_attempts += 1
                failed_ips[ip] = failed_ips.get(ip, 0) + 1

            elif "successful" in line or "Success" in line:
                successful_attempts += 1
                successful_ips[ip] = successful_ips.get(ip, 0) + 1

    print("\n===== LOG ANALYSIS REPORT =====\n")
    print(f"Total Failed Attempts: {failed_attempts}")
    print(f"Total Successful Logins: {successful_attempts}\n")

    print("Failed Login Activity:")
    if failed_ips:
        for ip, count in failed_ips.items():
            status = "⚠️ FLAGGED" if count >= THRESHOLD else "OK"
            print(f"{ip} -> {count} failed attempts [{status}]")
    else:
        print("No failed login activity found.")

    print("\nSuccessful Login Activity:")
    if successful_ips:
        for ip, count in successful_ips.items():
            print(f"{ip} -> {count} successful logins")
    else:
        print("No successful login activity found.")

    print("\nPotential Brute-Force Success Cases:")
    found_suspicious_pattern = False
    for ip, fail_count in failed_ips.items():
        if fail_count >= THRESHOLD and ip in successful_ips:
            print(f"{ip} -> {fail_count} failed attempts, then success 🚨")
            found_suspicious_pattern = True

    if not found_suspicious_pattern:
        print("No brute-force success patterns detected.")

    print("\n===== END OF REPORT =====\n")


if __name__ == "__main__":
    log_file = input("Enter log file path: ")
    analyze_log(log_file)
