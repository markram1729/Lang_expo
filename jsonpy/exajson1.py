import json

x = {
	"name":"metamark",
	"time":"12422",
	"cars":[
		{"types":"benz","types1":"audi"}
		]
	}

print(json.dumps(x))
