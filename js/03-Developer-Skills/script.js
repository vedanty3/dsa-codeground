'use strict';
const temps = [17, 21, 23];
let store = '"...';
function printForecast(temps) {
  for (let i = 0; i < temps.length; i++) {
    store += `${temps[i]}°C in ${i + 1} days...`;
    if (i == temps.length - 1) {
      store += '"';
    }
  }
}

printForecast(temps);
console.log(store);
