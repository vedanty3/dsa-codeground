"use strict";

import { log } from "console";

/*

// Data needed for a later exercise

// Data needed for first part of the section

const restaurant = {
  name: "Classico Italiano",
  location: "Via Angelo Tavanti 23, Firenze, Italy",
  categories: ["Italian", "Pizzeria", "Vegetarian", "Organic"],
  starterMenu: ["Focaccia", "Bruschetta", "Garlic Bread", "Caprese Salad"],
  mainMenu: ["Pizza", "Pasta", "Risotto"],
  order: function (starterIndex, mainIndex) {
    return [this.starterMenu[starterIndex], this.mainMenu[mainIndex]];
  },
  orderDelivery: function ({
    starterIndex = 0,
    mainIndex = 1,
    time = "20:00",
    address,
  }) {
    console.log(
      `ORDER RECEIVED!\n${this.starterMenu[starterIndex]} and ${this.mainMenu[mainIndex]} will be delivered to ${address} at ${time}.`
    );
  },
  orderPasta: function (ing1, ing2, ing3) {
    console.log(
      `Here is your delicious pasta with ${ing1},${ing2} and ${ing3}`
    );
  },
  orderPizza: function (mainIngredients, ...otherIngredients) {
    console.log(mainIngredients);
    console.log(otherIngredients);
  },
  openingHours: {
    thu: { open: 12, close: 22 },
    fri: { open: 11, close: 23 },
    sat: {
      open: 0, //Open 24 hours close: 24 },
    },
  },
};

///OBJECT DESTRUCTURING
restaurant.orderDelivery({
  time: "22:30",
  address: "Via del sone, 21",
  starterIndex: 3,
  mainIndex: 1,
});
restaurant.orderDelivery({
  address: "Via del sone, 21",
});

const { name, openingHours, categories } = restaurant;
console.log(name, openingHours, categories);
const {
  name: restaurantName,
  openingHours: hours,
  categories: tags,
} = restaurant;
console.log(restaurantName, hours, tags);

const { menu = [], starterMenu: starters = [] } = restaurant;
console.log(menu, starters);

//Mutating variables
let a = 11;
let b = 55;
const obj = { a: 23, b: 7, c: 9 };
({ a, b } = obj);
console.log(a, b);

// Nested objects
const {
  fri: { open: o, close: c },
} = openingHours;
console.log(o, c);
///ARRAY DESTRUCTURING
const array = [2, 3, 4];
const a = array[0];
const b = array[1];
const c = array[2];

const [x, y, z] = array;
console.log(x, y, z);

let [main, , secondary] = restaurant.categories;

console.log(main, secondary);

//Switching Variables
// const temp = main;
// main = secondary;
// secondary = temp;
// console.log(main, secondary);
[main, secondary] = [secondary, main];
console.log(main, secondary);

const [starter, mainCourse] = restaurant.order(2, 0);
console.log(starter, mainCourse);

//---------------------------------------------------------------------------------------------------

// Nested Destructuring
const nested = [3, 4, [8, 5]];
// const [i, , j] = nested;
const [i, , [j, k]] = nested;
console.log(i, j, k);

// Default Values

const [p = 1, q = 1, r = 1] = [8];
console.log(p, q, r);

// the spread operator(...)
const arr = [7, 8, 9];

const badNewArray = [1, 2, arr[0], arr[1], arr[2]];

console.log(badNewArray);

const goodNewArray = [1, 2, ...arr];
console.log(goodNewArray);

console.log(...goodNewArray);

const newMenu = [...restaurant.mainMenu, "Gnocci"];
console.log(newMenu);
const a = { 1: "hello", 2: "helloworld" };
const { 1: a1, 2: b1 } = a;
console.log(a1, b1);

//copy array
const mainMenuCopy = [...restaurant.mainMenu]; //creates shallow copy like const newArray=Object.assign({},oldarray)

//join 2 arrays
const menu = [...restaurant.starterMenu, ...restaurant.mainMenu];
console.log(menu);

// iterables :arrays,strings,sets,maps,NOT OBJECTS.

const str = "Jonas";
const letters = [...str, "", "s."];
console.log(letters);
console.log(...str);
// console.log(`$${...str} ss`);

//real world example
const ingredients = [
  prompt(`Let's ORDER PASTA!\nIngredient 1 ?`),
  prompt(`Ingredient 2 ?`),
  prompt(`Ingredient 3 ?`),
];

console.log(ingredients);

restaurant.orderPasta(ingredients[0], ingredients[1], ingredients[2]);

restaurant.orderPasta(...ingredients);

//objects

const newRestaurant = { ...restaurant, founder: "Guiseppe" };

console.log(newRestaurant);

const restaurantCopy = { ...restaurant };

restaurantCopy.name = "vedant's cuisine";

console.log(restaurant.name);
console.log(restaurantCopy.name);

// 1) Destructuring

//SPREAD (it unpacks), because on rhs of '='
const arr = [1, 2, ...[3, 4]];

//REST (it packs), because on lhs of '='
const [a, b, ...others] = [1, 2, 3, 4];

console.log("SPREAD", arr);
console.log("SPREAD", ...arr);
console.log("REST : ", "a : ", a, "\nb : ", b, "\nothers: ", others);

const [pizza, , rissotto, ...others1] = [
  ...restaurant.mainMenu,
  ...restaurant.starterMenu,
];

console.log(pizza, rissotto, others1);
console.log(pizza, rissotto, ...others1);

//Objects

const { sat, ...weekdays } = restaurant.openingHours;

console.log(weekdays, sat);

//just an example
const number = [1, 2];
const sum = function (number) {
  // let sum = a + b;
  const array3 = [1, 2, ...number];
  // console.log(sum);
  console.log(array3);
};
sum(number);
const number = [1, 2];
console.log(...number);

// 2) Functions
const add = function (...numbers) {
  let sum = 0;
  for (let i = 0; i < numbers.length; i++) {
    sum += numbers[i];
  }
  console.log(sum);
};
add(2, 3);
add(2, 3, 6, 7);
add(2, 3, 5, 7, 7, 3, 8);

const x = [33, 41, 3, 7];
add(...x);

//another example
const ingredients = ["mushrooms", "spinach", "olive"];
restaurant.orderPizza(...ingredients);

//Logical operators

console.log("----OR----");
//can use any data type
//can return any data type
//can perform short-circuiting (if first value is truthy then will return that value)

console.log(3 || "vedant");
console.log("" || "vedant");
console.log(true || 0);
console.log(undefined || null); // null and undefined are both falsy values

console.log(undefined || 0 || "" || "hello" || 23) || null;

//example
restaurant.numGuests = 23;
const guests1 = restaurant.numGuests ? restaurant.numGuests : 10;

console.log(guests1);

const guests2 = restaurant.numGuests || 10;
console.log(guests2);

console.log("----AND----");
console.log(0 && "Jonas");
console.log(1 && "Jonas");
console.log("Hello" && 23 && null && "Jonas");

if (restaurant.orderPizza) {
  restaurant.orderPizza("mushrooms", "spinach");
}

restaurant.orderPizza && restaurant.orderPizza("mushrooms", "spinach");

// NULLISH COALESCING
//NULLISH values are null or undefined
// val1 ?? val2 (val2 will be evaluated only when val1 will be "null" or "undefined" else val1 will be logged.)
restaurant.numGuests = 0;
const guest = restaurant.numGuests || 10;
console.log(guest);
const guestCorrect = restaurant.numGuests ?? 10;
console.log(guestCorrect);

//OR Assignment Operator

const rest1 = { name: "Capri", numGuests: 0 };

const rest2 = {
  name: "La Piazza",
  owner: "Giovanni Rossi",
  numGuests: undefined,
};

// rest1.numGuests = rest1.numGuests || 10;

// rest2.numGuests = rest2.numGuests || 10;

// rest1.numGuests ||= 10; doesn't work
// rest2.numGuests ||= 10;

//NULLISH Assignment Operator (NULL or UNDEFINED)
rest1.numGuests ??= 10;
rest2.numGuests ??= 10;

//AND Assignment Operator
// rest1.owner = rest1.owner && "<ANONYMOUS>";
// rest2.owner = rest2.owner && "<ANONYMOUS>";

rest1.owner &&= "<ANONYMOUS>";
rest2.owner &&= "<ANONYMOUS>";

console.log(rest1.numGuests, rest2.numGuests);

console.log(rest1);
console.log(rest2);

//coding challenge

const game = {
  team1: "Bayern Munich",
  team2: "Borrussia Dortmund",
  players: [
    [
      "Neuer",
      "Pavard",
      "Martinez",
      "Alaba",
      "Davies",
      "Kimmich",
      "Goretzka",
      "Coman",
      "Muller",
      "Gnarby",
      "Lewandowski",
    ],
    [
      "Burki",
      "Schulz",
      "Hummels",
      "Akanji",
      "Hakimi",
      "Weigl",
      "Witsel",
      "Hazard",
      "Brandt",
      "Sancho",
      "Gotze",
    ],
  ],
  score: "4:0",
  scored: ["Lewandowski", "Gnarby", "Lewandowski", "Hummels"],
  date: "Nov 9th, 2037",
  odds: {
    team1: 1.33,
    x: 3.25,
    team2: 6.5,
  },
};

const [players1, players2] = game.players;
console.log(players1, players2);

const [gk, ...fieldPlayers] = players1;
console.log(gk, fieldPlayers);

const allPlayers = [...players1, ...players2];
console.log(allPlayers);

const playersFinal = [...players1, "Thiago", "Coutinho", "Periscic"];

console.log(playersFinal);

const {
  odds: { team1, x: draw, team2 },
} = game;

console.log(team1, draw, team2);

const printGoals = function (...players) {
  console.log(`${players.length} goals were scored`);
};

printGoals("Davies", "Muller", "Lewandowski", "Kimmich");
printGoals("Davies", "Muller");

printGoals(...game.scored);

team1 < team2 && console.log("Team 1 is more likely to win");

team1 > team2 && console.log("Team 2 is more likely to win");

//Looping arrays - For-of loop
const menu = [...restaurant.starterMenu, ...restaurant.mainMenu];

for (const item of menu) {
  console.log(item);
}

//one way
for (const item of menu.entries()) {
  console.log(`${item[0] + 1} : ${item[1]}`);
}

//another way
for (const [i, el] of menu.entries()) {
  console.log(`${i} : ${el}`);
}

// console.log([...menu.entries()]);

//Enhanced object literals
const weekdays = ["mon", "tue", "wed", "thu", "fri", "sat", "sun"];
const openingHours = {
  [weekdays[3]]: { open: 12, close: 22 },
  [weekdays[4]]: { open: 11, close: 23 },
  [weekdays[5]]: { open: 0, close: 24 },
};

const restaurant = {
  name: "Classico Italiano",
  location: "Via Angelo Tavanti 23, Firenze, Italy",
  categories: ["Italian", "Pizzeria", "Vegetarian", "Organic"],
  starterMenu: ["Focaccia", "Bruschetta", "Garlic Bread", "Caprese Salad"],
  mainMenu: ["Pizza", "Pasta", "Risotto"],
  order(starterIndex, mainIndex) {
    return [this.starterMenu[starterIndex], this.mainMenu[mainIndex]];
  },
  orderDelivery({ starterIndex = 0, mainIndex = 1, time = "20:00", address }) {
    console.log(
      `ORDER RECEIVED!\n${this.starterMenu[starterIndex]} and ${this.mainMenu[mainIndex]} will be delivered to ${address} at ${time}.`
      );
    },
    orderPasta(ing1, ing2, ing3) {
      console.log(
        `Here is your delicious pasta with ${ing1},${ing2} and ${ing3}`
        );
      },
      // ES6 enhanced object literals
      orderPizza(mainIngredients, ...otherIngredients) {
        console.log(mainIngredients);
        console.log(otherIngredients);
      },
      // pre ES6 method
      // openingHours: openingHours,
      // ES6 enhanced object literals
      openingHours,
    };
    
    // Normal use case
    if (restaurant.openingHours && restaurant.openingHours.mon) {
      console.log(restaurant.openingHours.mon.open);
    }
    
    // OPTIONAL CHAINING (?.) (used to check if something exist or not)
    console.log(restaurant.openingHours.mon?.open);
    
    console.log(restaurant?.openingHours);
    
    const days = ["mon", "tue", "wed", "thu", "fri", "sat", "sun"];
    
    for (const day of days.entries()) {
      const open = restaurant.openingHours[day[1]]?.open ?? ` closed.`;
      console.log(`On ${day[1]} we open at  ${open}`);
    }
    
    
    // OPTIONAL CHAINING on METHODS
    console.log(restaurant.order?.(0, 1) ?? `Method don't exist.`);
    
    console.log(restaurant.orderRissoto?.(0, 1) ?? `Method don't exist.`);
    
    // OPTIONAL CHAINING on ARRAYS
    
    const users = [{ name: "Vedant", email: "hellovedant" }];
    
    console.log(users[0]?.name ?? `user array empty...`);
    console.log(users[1]?.name ?? `user array empty...`);
    
    
    // LOOPING OBJECTS
    
    // 1.Property NAMES (KEYS)
    const properties = Object.keys(restaurant.openingHours);
let openStr = `We are open for ${properties.length} days : `;
for (const day of properties) {
  openStr += `${day} `;
}
// console.log(openStr);

// 2.Property VALUES
const values = Object.values(restaurant.openingHours);
// console.log(values);

// 3.Entire OBJECT
const entries = Object.entries(restaurant.openingHours);
// console.log(entries);

for (const [key, { open, close }] of entries) {
  console.log(`On ${key} we are open at ${open} and close at ${close}.`);
}


// CODING CHALLENGE
const game = {
  team1: "Bayern Munich",
  team2: "Borrussia Dortmund",
  players: [
    [
      "Neuer",
      "Pavard",
      "Martinez",
      "Alaba",
      "Davies",
      "Kimmich",
      "Goretzka",
      "Coman",
      "Muller",
      "Gnarby",
      "Lewandowski",
    ],
    [
      "Burki",
      "Schulz",
      "Hummels",
      "Akanji",
      "Hakimi",
      "Weigl",
      "Witsel",
      "Hazard",
      "Brandt",
      "Sancho",
      "Gotze",
    ],
  ],
  score: "4:0",
  scored: ["Lewandowski", "Gnarby", "Lewandowski", "Hummels"],
  date: "Nov 9th, 2037",
  odds: {
    team1: 1.33,
    x: 3.25,
    team2: 6.5,
  },
};

//1.
for (const [i, el] of game.scored.entries()) {
  console.log(`Goal ${i + 1} :`, el);
}

//2.

let avg = 0;
for (const odd of Object.values(game.odds)) {
  avg += odd;
}

avg /= Object.values(game.odds).length;

console.log(avg);

//3.

for (const [team, odd] of Object.entries(game.odds)) {
  const teamStr = team === "x" ? "draw" : `victory ${game[team]}`;
  console.log(`Odd of ${teamStr} ${odd}`);
}


// SET'S (collection of unique values and don't contain duplicate.)

const orderSet = new Set(["Pasta", "Pizza", "Pizza", "Rissoto", "Pasta"]);

console.log(orderSet);

console.log(new Set("Jonas"));
console.log(new Set(""));
console.log(new Set());

console.log(orderSet.size);
console.log(orderSet.has("Pizza"));
console.log(orderSet.has("Bread"));

orderSet.add("Garlic Bread");
orderSet.add("Garlic Bread");
orderSet.delete("Rissoto");

// orderSet.clear();
console.log(orderSet);

for (const orders of orderSet) {
  console.log(orders);
}

// Example

const staff = ["Waiter", "Manager", "Chef", "Waiter", "Chef"];

const staffUnique = [...new Set(staff)];
console.log(staffUnique);

console.log(new Set(["Waiter", "Manager", "Chef", "Waiter", "Chef"]));

console.log(new Set("vedantyetekar").size);


// MAP (key-value pairs)
const rest = new Map();

rest.set("Name", "vedant's cuisine");
rest.set(1, "NYC, US");
rest.set(2, "Mexico, US");
rest
.set("categories", ["Italian", "Pizzeria", "Vegeterian", "Organic"])
.set("open", 11)
.set("close", 23)
.set(true, "We are open :D")
.set(false, "We are closed");

console.log(rest.get("Name"));
console.log(rest.get(true));

const time = 21;
rest.get(time > rest.get("open") && time < rest.get("close"));

console.log(rest.has("categories"));
// rest.delete("Name");
console.log(rest.size);
rest.clear();

const arr = [1, 2];
rest.set(arr, "Test");
rest.set(document.querySelector("h1"), "Heading");
// console.log(rest.get(arr));
console.log(rest);


const question = new Map([
  ["question", "What is the best programming language in the world? "],
  [1, "C++"],
  [2, "Java"],
  [3, "Javascript"],
  ["correct", 3],
  [true, "Correct answer"],
  [false, "Try again..."],
]);

// console.log(question);

const openingHours = {
  thu: { open: 12, close: 22 },
  fri: { open: 11, close: 23 },
  sat: { open: 0 },
};

// console.log(Object.entries(openingHours));

const hoursMap = new Map(Object.entries(openingHours));

// console.log(hoursMap);

console.log(question.get("question"));
for (const [key, value] of question) {
  if (typeof key === "number") {
    console.log(`OPTION ${key} : ${value}`);
  }
}

// const response = Number(prompt("Enter the option..."));

// console.log(question.get(question.get("correct") === response));

// Convert map to array
console.log(...question);
console.log(...question.entries());
console.log(...question.keys());
console.log(...question.values());

*/

// Coding challenge
/*
Let's continue with our football betting app! This time, we have a map called
'gameEvents' (see below) with a log of the events that happened during the
game. The values are the events themselves, and the keys are the minutes in which
each event happened (a football game has 90 minutes plus some extra time).
Your tasks:
1. Create an array 'events' of the different game events that happened (no
duplicates)

2. After the game has finished, is was found that the yellow card from minute 64
was unfair. So remove this event from the game events log.

3. Compute and log the following string to the console: "An event happened, on
average, every 9 minutes" (keep in mind that a game has 90 minutes)

4. Loop over 'gameEvents' and log each element to the console, marking
whether it's in the first half or second half (after 45 min) of the game, like this:
[FIRST HALF] 17: ⚽ GOAL
GOOD LUCK �


const gameEvents = new Map([
  [17, "⚽ GOAL"],
  [36, "� Substitution"],
  [47, "⚽ GOAL"],
  [61, "� Substitution"],
  [64, "� Yellow card"],
  [69, "� Red card"],
  [70, "� Substitution"],
  [72, "� Substitution"],
  [76, "⚽ GOAL"],
  [80, "⚽ GOAL"],
  [92, "� Yellow card"],
]);

// 1.
const events = [...new Set(gameEvents.values())];
console.log(events);

// 2.
gameEvents.delete(64);

// 3.
const time = [...gameEvents.keys()].pop();
console.log(time);
console.log(
  `An event happened, on average, every ${time / gameEvents.size} minutes`
  );
  
  // 4.
  for (const [min, value] of gameEvents.entries()) {
    const half = min <= 45 ? "FIRST" : "SECOND";
    console.log(`[${half} HALF] ${min} : ${events}`);
  }
  
  
  // Working with Strings
  
  const airline = "TAP Air Portugal";
  const plane = "A320";

  console.log(plane[0]);
console.log(plane[1]);
console.log(plane[3]);
console.log("B737"[0]);

console.log(airline.length);
console.log("vedant".length);

console.log([..."vedant"]);

console.log(airline.indexOf("r"));
console.log(airline.lastIndexOf("r"));
console.log(airline.indexOf("Portugal"));

console.log(airline.slice(4));
console.log(airline.slice(8));
console.log(airline.slice(8, 9));
console.log(airline.slice(0, airline.indexOf(" ")));
console.log(airline.slice(airline.lastIndexOf(" ") + 1));

console.log(airline.slice(-2));
console.log(airline.slice(1, -1));

const checkMiddleSeat = function (seat) {
  const s = seat.slice(-1);
  if (s == "B" || s == "E") {
    console.log("You got the middle seat.");
  } else {
    console.log("You got lucky");
  }
};

// B and E are middle seats
checkMiddleSeat("11B");
checkMiddleSeat("23C");
checkMiddleSeat("3E");

console.log(new String("vedant"));
console.log(typeof new String("vedant"));
console.log(typeof new String("vedant").slice(1));

console.log(airline.toLowerCase());
console.log(airline.toUpperCase());

// Fix capitalisation in name

const passenger = "jOnAs"; //Jonas

const passengerLower = passenger.toLowerCase();

const passengerCorrect =
passengerLower[0].toUpperCase() + passengerLower.slice(1);

console.log(passengerCorrect);

// comparing email

const email = "ursvedantyetekar@gmail.com";

const loginEmail = " Ursvedantyetekar@gmail.Com \n";

const lowerEmail = loginEmail.toLowerCase();
const trimmedEmail = lowerEmail.trim();

console.log(trimmedEmail);

const normalisedEmail = loginEmail.toLowerCase().trim();

console.log(normalisedEmail);
console.log(email === normalisedEmail);

// replacing
const price = "288,97$";
const priceRs = price.replace("$", "Rs").replace(",", ".");
console.log(priceRs);

const announcement =
"All passengers come to boarding door 23. Boarding door 23!";

console.log(announcement.replace("door", "gate"));
console.log(announcement.replaceAll("door", "gate"));

console.log(announcement.replace(/door/g, "gate"));

// Booleans

const newPlane = "Airbus A320neo";
console.log(newPlane.includes("A320"));
console.log(newPlane.includes("Boeing"));

console.log(newPlane.startsWith("Air"));

if (newPlane.startsWith("Airbus") && newPlane.endsWith("neo")) {
  console.log(`Part of new Airbus family...`);
}

// Exercise

const checkBaggage = function (items) {
  const baggage = items.toLowerCase();
  if (baggage.includes("knife") || baggage.includes("gun")) {
    console.log("You are not allowed on board");
  } else {
    console.log("You're welcome!");
  }
};

checkBaggage("I have laptop, some Food and pocket Knife");
checkBaggage("I have a camera");
checkBaggage("Got some snacks and gun for protection");


// Split and Join
console.log(..."a+very+nice+string".split("+"));
console.log("a+very+nice+string".split("+"));
const [firstName, lastName] = "vedant yetekar".split(" ");

console.log(firstName);
console.log(lastName);

const newName = ["Mr.", firstName, lastName.toUpperCase()].join(" ");

console.log(newName);

// Important
const capitalLastName = function (name) {
  const names = name.split(" ");
  const namesUpper = [];
  for (const x of names) {
    // namesUpper.push(x[0].toUpperCase() + x.slice(1));
    namesUpper.push(x.replace(x[0], x[0].toUpperCase()));
  }
  console.log(namesUpper.join(" "));
};

capitalLastName("vedant yetekar");
capitalLastName("parth yetekar");

// Padding

const message = `Go to gate 23`;
console.log(message.padStart(25, "*"));

console.log("vedant yetekar".padStart(8, "*").padEnd(10, "*"));

const maskPassword = function (number) {
  const str = String(number);
  const last = str.slice(-4);
  return last.padStart(str.length, "*");
};

console.log(maskPassword(60394242137));

// Repeat
const message2 = "Bad weather... All Departures Delayed... ";

console.log(message2.repeat(5));

const planesInLine = function (n) {
  console.log(`There are ${n} planes in line ${n}...`.repeat(n));
};

planesInLine(3);
planesInLine(13);
planesInLine(4);

// Coding Challenge #4

Write a program that receives a list of variable names written in underscore_case
and convert them to camelCase.
The input will come from a textarea inserted into the DOM (see code below to
  insert the elements), and conversion will happen when the button is pressed.
  Test data (pasted to textarea, including spaces):
  underscore_case
  first_name
  Some_Variable
  calculate_AGE
  delayed_departure
  Should produce this output (5 separate console.log outputs):
  underscoreCase       ✅
  firstName           ✅✅
someVariable       ✅✅✅
calculateAge      ✅✅✅✅
delayedDeparture ✅✅✅✅✅
Hints:
§ Remember which character defines a new line in the textarea �
§ The solution only needs to work for a variable made out of 2 words, like a_b
§ Start without worrying about the ✅. Tackle that only after you have the variable
name conversion working �
§ This challenge is difficult on purpose, so start watching the solution in case
you're stuck. Then pause and continue!
Afterwards, test with your own test data!
GOOD LUCK �


document.body.append(document.createElement("textarea"));
document.body.append(document.createElement("button"));

document.querySelector("button").addEventListener("click", function () {
  const text = document.querySelector("textarea").value;
  const rows = text.split("\n");
  
  for (const [i, row] of rows.entries()) {
    const [first, second] = row.toLowerCase().trim().split("_");
    const output = `${first}${second.replace(
      second[0],
      second[0].toUpperCase()
      )}`;
    console.log(`${output.padEnd(20, " ")}${"✅".repeat(i + 1)}`);
  }
});


const flights =
"_Delayed_Departure;fao93766109;txl2133758440;11:25+_Arrival;bru0943384722;fao93766109;11:45+_Delayed_Arrival;hel7439299980;fao93766109;12:05+_Departure;fao93766109;lis2323639855;12:30";

const getCode = (str) => str.slice(0, 3).toUpperCase();

for (const flight of flights.split("+")) {
  const [type, from, to, time] = flight.split(";");
  const output = `${type.startsWith("_Delayed") ? "💀" : ""}${type.replaceAll(
    "_",
    " "
  )} ${getCode(from)} ${getCode(to)} (${time.replace(":", "h")})`.padStart(36);
  console.log(output);
}

*/
