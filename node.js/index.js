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

// import installed colors module.
const colors = require("colors");
console.log("Hello, I'm Vedant Yetekar.".red);

// installed nodemon globally
// nodemon saves time by making our app run continuously.// once you make changes and save code the output will be reflected.

console.log("hello world");
console.log("hi, I'm Vedant Yetekar.");

// NodeJs is single threaded and asynchronous.
// it will execute scripts one after other.

// Make a basic API
const http = require("http");
const data = require("./data");

http
.createServer((req, res) => {
  res.writeHead(200, { "Content-Type": "application/json" });
  res.write(JSON.stringify(data));
  
  res.end();
})
.listen(3000);


// Getting input from command line, creating and deleting file with input.

// console.log(process.argv[3]);

const fs = require("fs");

const input = process.argv;
fs.writeFileSync(input[2], input[3]);


// Adding and removing files.

const fs = require("fs");
const input = process.argv;

if (input[2] == "add") {
  fs.writeFileSync(input[3], input[4]);
} else if (input[2] == "remove") {
  fs.unlinkSync(input[3]);
} else {
  console.log("invalid input");
}

// Creating files in a folder.

const fs = require("fs");
const path = require("path");
const dirPath = path.join(__dirname, "files");

for (let i = 1; i < 5; i++) {
  fs.writeFileSync(dirPath + `/file${i}.txt`, `This is file ${i}.`);
  // fs.unlinkSync(dirPath + `/file${i}.txt`);
}


// Reading files.

const fs = require("fs");

fs.readdir(__dirname + "/files", (error, files) => {
  files.forEach((file) => {
    console.log(file);
  });
});

//-------------------------------------------------------------------------------------------------------------------

//----------------------------------------------- CRUD WITH FILE SYSTEM----------------------------------------------

// 1. CREATE A FILE
const fs = require("fs");
const path = require("path");
const dirPath = path.join(__dirname, "crud");
const filePath = `${dirPath}/CRUD.txt`;

fs.writeFileSync(filePath, "File created using fs module.");

// 2. READ A FILE
fs.readFile(filePath, "utf-8", (error, file) => {
  console.log(file);
});

// 3. UPDATE A FILE
fs.appendFile(filePath, "\nPerforming CRUD operations.", (error) => {});

// 4. RENAME A FILE
fs.rename(filePath, `${dirPath}/CRUD.txt`, (error) => {});

// 5. DELETE A FILE
fs.unlinkSync(`${dirPath}/CRUD.txt`);

//-------------------------------------------------------------------------------------------------------------------

//---------------------------------------NODEJS AND JAVASCRIPT: ASYNCHRONOUS ???-------------------------------------

// JavaScript and NodeJs are asynchronous, they do not wait for one task to finish. Once the script is executed it moves to another task which becomes the reason for NodeJs and JavaScript being faster.

// EXAMPLE: 

console.log("I'M FIRST...");

setTimeout(() => {
  console.log("I'M SECOND...");
}, 1000);

console.log("I'M THIRD...");

// DRAWBACK: In the example show below we're updating the value of b but still the result of log is 10. This issue can be handled using promises.

let a = 10;
let b = 0;

setTimeout(() => {
  b = 20;
}, 1000);

console.log(a + b);

// OVERCOMING THE DRAWBACK:

let a = 10;
let b = 0;

const waitingForB = new Promise((resolve, reject) => {
  setTimeout(() => {
    resolve(20);
  }, 5000);
});

waitingForB.then((b) => {
  console.log(a + b);
});

// Some functions are already promises e.g. fetch().

//-------------------------------------------------------------------------------------------------------------------

//------------------------------------------------HOW NODEJS WORKS??-------------------------------------------------

// 1. CALL STACK
// 2. NODE API
// 3. CALLBACK QUEUE

// EXAMPLE:

console.log("STARTING UP!");

setTimeout(() => {
  console.log("TWO SECONDS!");
}, 2000);

setTimeout(() => {
  console.log("ZERO SECONDS!");
}, 0);

console.log("FINISHING UP!");

//-------------------------------------------------------------------------------------------------------------------

//------------------------------------------EXPRESSJS: A NodeJS Framework--------------------------------------------

// Creating a webpage with routes using express.js.
// Rendering HTML and JSON data on a page.

const express = require("express");
const app = express();

app.get("", (req, res) => {
  res.send(
    `
    <h2>${req.query.name ? "Hello, " + req.query.name : "HOMEPAGE"}</h2>
    <a href="/about">Go to about</a>
    `
    );
});

app.get("/about", (req, res) => {
  res.send(`
  <input type="text" placeholder="Username" value=${
    req.query.name ? req.query.name : "Username"
  }/>
  <button>Submit</button>
  <a href="/">Go to home</a>
  `);
});

app.get("/help", (req, res) => {
  res.send([
    { name: "Vedant Yetekar", email: "ursvedantyetekar@gmail.com" },
    { name: "Sam D'souza", email: "sam@test.com" },
  ]);
});

app.listen(3000);

// Rendering HTML Pages.

const express = require("express");
const path = require("path");

const app = express();
const publicPath = path.join(__dirname, "public");

// Using below method won't hide file extension.
// app.use(express.static(publicPath));

app.get("", (req, res) => {
  res.sendFile(`${publicPath}/index.html`);
});

app.get("/about", (req, res) => {
  res.sendFile(`${publicPath}/about.html`);
});

app.get("*", (req, res) => {
  res.sendFile(`${publicPath}/error.html`);
});

app.listen(3000);

// Template Engine (ejs)

const express = require("express");
const app = express();

app.set("view engine", "ejs");

app.get("/profile", (req, res) => {
  const user = {
    name: "Vedant Yetekar",
    email: "ursvedantyetekar@gmail.com",
    city: "Pune",
    state: "Maharashtra",
    country: "India",
    skills: ["ReactJs", "NodeJs", "JavaScript", "C++"],
  };

  res.render("profile", { user });
});

app.get("/login", (req, res) => {
  res.render("login");
});

app.listen(3000);


//---------------------------------------------------MIDDLEWARE------------------------------------------------------

// Application Level Middleware: can be applied on all routes present in the application.

// Middlewares are used in order to filter requests, e.g. like filter users age and deciding on the basis of his age weather he/she can access the site.

const express = require("express");
const app = express();

const reqFilter = (req, res, next) => {
  if (!req.query.age) {
    res.send("Please Provide You Age!");
  } else if (req.query.age < 18) {
    res.send("You cannot access this content!");
  } else {
    next();
  }
};

app.use(reqFilter);

app.get("/", (req, res) => {
  res.send("LEARNING ABOUT MIDDLEWARES.");
});

app.get("/about", (req, res) => {
  res.send(
    "Middlewares are used in order to filter requests, e.g. like filter users age and deciding on the basis of his age weather he/she can access the site."
    );
});

app.listen(4000);


// Route Level Middleware: Applying middleware on specific routes.

const express = require("express");
const app = express();

const reqFilter = (req, res, next) => {
  if (!req.query.age) {
    res.send("Please Provide You Age!");
  } else if (req.query.age < 18) {
    res.send("You Cann't This Content!");
  } else {
    next();
  }
};

app.get("/", (req, res) => {
  res.send("HOMEPAGE");
});

app.get("/about", reqFilter, (req, res) => {
  res.send("ABOUTPAGE");
});

app.listen(5000);

// Putting Middleware in Separate File.

const express = require("express");
const app = express();

const reqFilter = require("./middleware");

app.get("/", (req, res) => {
  res.send("HOMEPAGE");
});

app.get("/about", reqFilter, (req, res) => {
  res.send("ABOUTPAGE");
});

app.listen(5000);


// Applying middleware on a group of routes use `Router` instance of express, e.g. `const route = express.Router()`

const express = require("express");
const app = express();
const route = express.Router();

const reqFilter = require("./middleware");
route.use(reqFilter);

app.get("/", (req, res) => {
  res.send("HOMEPAGE");
});

route.get("/about", (req, res) => {
  res.send("ABOUTPAGE");
});

app.use("/", route);

app.listen(5000);

//-----------------------------------------------------MongoDB-------------------------------------------------------

// Connect MongoDB with NodeJs.

const { MongoClient } = require("mongodb");
const url = "mongodb://localhost:27017";
const dataBase = "employee-db";
const client = new MongoClient(url);

const getData = async () => {
  let result = await client.connect();
  let db = result.db(dataBase);
  let collection = db.collection("employee-details");
  let response = await collection.find({}).toArray();
  console.log(response);
};

getData();

// Creating a separate file for MongoDB.

//---------> READING DATA.

// 1. One way using promise.

const dbConnect = require("./mongodb");

dbConnect().then((response) => {
  response
  .find()
  .toArray()
  .then((data) => {
    console.log(data);
  });
});

// 2. Using Async Await.

const dbConnect = require("./mongodb");
  
  const waitForDBToConnect = async () => {
    let response = await dbConnect();
    let data = await response.find().toArray();
    
    console.log(data);
  };
  
  waitForDBToConnect();
  
  */
