const express = require("express");
const bodyParser = require("body-parser");
const fetch = require("node-fetch");
const FormData = require("form-data");

const PORT = process.env.PORT || 5000;

const app = express();
// app.use( bodyParser.json() );
app.use(bodyParser.urlencoded({
  // extended: true,
}));

function jsonUrlEncode(json) {
	return Object.keys(json).map(function(key) {
		if (key === 'code') {
			return `${key}=${json[key]}`
		}
		return `${key}=${encodeURI(json[key])}`
		// return `${key}=${json[key]}`
	}).join("&")
}

app.get("/method/*", function(request, response) {
	console.log("req", request.query, request.params, request.headers);
	if (request.query.message) {
		request.query.message += " {{CUSTOM SERVER}}"
	}
	const pending = fetch(`https://api.vk.com/method/${request.params['0']}?${jsonUrlEncode(request.query)}`, {
		headers: {
			'User-Agent': request.headers['User-Agent'],
		},
	});
	pending.then((res) => {
		return res.json();
	}).then(res => {
		response.send(res)
	});
});

app.post("/method/*", function(request, response) {
	console.log("POST", request.body);
	const pending = fetch(`https://api.vk.com/method/${request.params['0']}?${jsonUrlEncode(request.body)}`, {
		headers: {
			'User-Agent': request.headers['User-Agent'],
		},
	});
	pending.then(res => res.json()).then(res => {
		response.send(res)
	});
});


app.listen(PORT, function() {
	console.log(`Listend on port ${PORT}`);
})