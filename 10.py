import requests

response = requests.get("https://httpbin.org/get")
print(response.text)  # 打印网页内容
