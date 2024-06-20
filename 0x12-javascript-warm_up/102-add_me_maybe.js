#!/usr/bin/node
// incrementAndCall.js
function incrementAndCall(number, theFunction) {
  number++;
  theFunction(number);
}

module.exports = incrementAndCall;

