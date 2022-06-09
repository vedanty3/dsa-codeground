/*
const app = require("./app");

console.log("hello world");

let a = 20;
let b = 30;
console.warn(a + b);



const arr = new Array();

arr.push(10);
arr.push(20);
arr.push(30);
arr.push(40);
arr.push(50);

console.log(app.x);
console.log(app.y);
console.log(app);

app.print(arr);

const newArr = arr.filter((el) => el > 20);

console.log(newArr);
console.log(arr);

const arr = [1, 2, 33, 55, 77, 101, 501];

const binarySearch = (arr, val) => {
  let s = 0;
  let e = arr.length - 1;

  while (s <= e) {
    let mid = s + (e - s) / 2;

    if (arr[mid] == val) {
      return mid;
    } else if (val > arr[mid]) {
      s = mid + 1;
    } else {
      e = mid - 1;
    }
  }

  return -1;
};

console.log(binarySearch(arr, 500));


// Global Modules: not needed to be imported.
// e.g. console.log()
// Non-Global Modules: are need to be imported.
//e.g. fs(FileSystem)

const fs = require("fs");

fs.writeFileSync("greet.txt", "hello people of the internet.");

console.log("->>>>>", __dirname, "<<<<<-");
console.log("->>>>>", __filename, "<<<<<-");

// Can also be imported directly
const fs = require("fs").writeFileSync;

fs("code.txt", "hello world");

// Make a basic server
// createServer() takes a function as a parameter.
// http module handles requests and response on a server.

const http = require("http");
http
.createServer((req, res) => {
  res.write("Hello, This is Vedant Yetekar");
  res.end();
})
.listen(3000);
*/

// import installed colors module.

const colors = require("colors");
console.log("Hello, I'm Vedant Yetekar.".red);
