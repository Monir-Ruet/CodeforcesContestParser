#!/usr/bin/python3

import requests
headers = {'User-Agent': 'Mozilla/5.0'}

response = requests.get('http://codeforces.com/contest/2020', headers=headers)
print(response)