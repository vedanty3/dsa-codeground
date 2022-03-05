/*
console.log(44 + 22);
console.log("vedant")
let firstName = "vedant";
console.log(firstName);
let full_name = "vedant yetekar"
console.log(full_name);

let $function = 22;
let _function = 22;
let PI = 3.1414;   // constants are named all in uppercase

let myFirstJob = "Programmer";
let myCurrentJob = "Web Developer";
console.log(myFirstJob);
console.log(myCurrentJob);

***assignment1***
let country = "Country : India";
continent = "Continent : Asia";
let population = "Population : 1.2B";
console.log(country);
console.log(continent);
console.log(population);
*/


/*
let firstName = "vedant";
console.log(typeof "vedant");
console.log(typeof firstName);
console.log(typeof 22);
let bool = true;
console.log(typeof bool);
bool = 77;
console.log(typeof bool);

let age;
console.log(age);
console.log(typeof age);
age = 22;
console.log(age);
console.log(typeof age);
console.log(typeof null);
console.log(typeof undefined);

***assignment***
let isIsland = false;
let language;
let country = "Country : India";
let population = "Population : 1.2B";
console.log(typeof isIsland);
console.log(typeof language);
console.log(typeof country);
console.log(typeof population);

*/

/*
let age = 33;
age = 34;
const birthYear = 2003;
birthYear = 2002; illegal
const job; illegal
var job = "teacher";
var job = "coder";
lastName = "yetekar";
console.log(lastName);

***assignment***
const country = "India";
const language = "marathi";
const continent = "Asia";
continent = "Europe";


const now = 2021;
const ageVedant = now - 2003;
const ageSarah = now - 2002;
console.log(ageVedant, ageSarah);

console.log(ageVedant * 2, ageVedant / 2, 2 ** 3);
// "2**3" is 2 to the power of 3 = 2*2*2 = 8


let firstName = "vedant";
let lastName = "yetekar";
console.log(firstName + " " + lastName);


// Assignment Operators
let x = 10 + 5;
console.log(x);

x += 15;    //x=x+15 = 30
console.log(x);
x *= 4;
console.log(x);
x++;         // x=x+1
console.log(x);
x--;
x--;
console.log(x);
console.log(ageVedant > ageSarah);   // >, <, >=, <=, ==
console.log(ageVedant >= 18);
let isfullAge = ageVedant >= 18;
console.log(isfullAge);
console.log(now - 2003 > now - 2002);


**assignment**
const country = "India";
let population = 7
const continent = "Asia";
const language = "hindi";
console.log(population / 2);
population++;
console.log(population);
console.log(population > 6);
console.log(population < 33);
const description1 = country + ' is in ' + continent + ', and its ' + population + ' million people speak ' + language;
console.log(description1);

let x, y;
x = y = 25 - 10 - 5; //x=y=10, y=10, x=10
console.log(x, y);

let ageVedant = 18;
let ageSarah = 19;
let avgAge = (18 + 19) / 2;
console.log(ageVedant, ageSarah, avgAge);

**coding challenge**
const markHeight = 1.88;
const johnHeight = 1.76;
const markWeight = 95;
const johnWeight = 85;
const markBmi = (markWeight) / (markHeight ** 2);
const johnBmi = (johnWeight) / (johnHeight ** 2);
const markHigherBmi = markBmi > johnBmi;
console.log(markBmi, johnBmi, markHigherBmi);

const firstName = "vedant";
const birthYear = 2003;
const now = 2021;
const str1 = "hello I'm " + firstName + ", " + "a " + (now - birthYear) + " years old student !"
console.log(str1);
const str2 = `hello I'm ${firstName}, a ${now - birthYear} years old student !`;
console.log(str2);
console.log(`just a regular string...`);


// old version
console.log("hello\n\
I'm vedant.\n\
a 18 years old student.");


// ES6
console.log(`hello.
I'm vedant yetekar.
a 18 years old student.`);

**assignment**
const country = "India";
let population = 7
const continent = "Asia";
const language = "hindi";
console.log(population / 2);
population++;
console.log(population);
console.log(population > 6);
console.log(population < 33);
const description1 = country + ' is in ' + continent + ', and its ' + population + ' million people speak ' + language;
const description2 = `${country} is in ${continent}, and its ${population} million people speak ${language}`;
console.log(description1);


const age = 13;
if (age >= 18) {
    console.log("you can  start driving");
}
else {
    const yearsLeft = 18 - age;
    console.log(`you are too young. wait for ${yearsLeft} more years.`);

}
console.log(description2);
const birthYear = 2003;
let century;

if (birthYear <= 2000) {
    century = 20;
}
else {
    century = 21;
}
console.log(century);

const markHeight = 1.88;
const johnHeight = 1.76;
const markWeight = 95;
const johnWeight = 85;
const markBmi = (markWeight) / (markHeight ** 2);
const johnBmi = (johnWeight) / (johnHeight ** 2);

if (markBmi > johnBmi) {
    console.log(`Mark's BMI ${markBmi} is greater than John's ${johnBmi}`);
}
else {
    console.log(`Mark's BMI ${markBmi} is less than John's ${johnBmi}`);
}


//  type conversion
const inputYear = "2021";
console.log(Number(inputYear) + 20, inputYear);
console.log(Number("hello"));
console.log(typeof NaN);
console.log(String(22), 22);


// type coercion
console.log("I am " + 23 + " years old");
console.log('23' - '10' - 3);
console.log('23' + '10' + 3);
console.log("23" * "2");
console.log("23" / "2");


let n = '1' + 1;
n = n - 1;
console.log(n);

// 5 falsy values 0, " ", NaN, undefined, null
console.log(Boolean(0));
console.log(Boolean(NaN));
console.log(Boolean(undefined));
console.log(Boolean(null));
console.log(Boolean(""));
console.log(Boolean(" "));
console.log(Boolean({}));
console.log(Boolean("vedant"));


let money = 11110;
if (money) {
    console.log("Don't spend it all.");
}
else {
    console.log("You should get a job!");
}



let height = 0;
if (height) {
    console.log("YAY, height is defined.");
}
else {
    console.log("Height is UNDEFINED.");
}



// strict equality operator "===", doesn't support type coersion
// loose equality operator "==" does support type coersion
console.log(18 == '18');
console.log(18 === '18');

let age = 18;
if (age === '18') {
    console.log("You are an adult.(strict)");
}
if (age == '18') {
    console.log("You are an adult.(loose)");
}


const fav = Number(prompt("What's your favourite number ? "));
console.log(fav);
console.log(typeof fav);

if (fav == 23)  // '23'==23
{
    console.log("Cool! 23 is an amazing number !");
}

if (fav === 23)  // 23===23
{
    console.log("Cool! 23 is an amazing number !");
}
else if (fav === 7) {
    console.log("7 is also a cool number !");
}
else if (fav !== 23) {
    console.log("why not 23?");
}
else {
    console.log("Number is not 23 or 7.");
}

console.log(hasDriversLicense && hasGoodVision);
console.log(hasDriversLicense || hasGoodVision);
console.log(hasDriversLicense && !hasGoodVision);


const hasDriversLicense = true;
const hasGoodVision = false;
const shouldDrive = hasDriversLicense && hasGoodVision;
if (shouldDrive) {
    console.log("Sarah is able to drive");
}
else {
    console.log("Someone else should drive");
}

console.log(hasDriversLicense || hasGoodVision || isTired);
console.log(hasDriversLicense && hasGoodVision && isTired);



const hasDriversLicense = true;
const isTired = false;
const hasGoodVision = true;
const shouldDrive = hasDriversLicense && hasGoodVision && !isTired;
if (shouldDrive) {
    console.log("Sarah is able to drive");
}
else {
    console.log("Someone else should drive");
}


**coding challenge**
const scoreDolphins = (96 + 108 + 88) / 3;
const scoreKoalas = (96 + 108 + 88) / 3;
console.log(scoreDolphins, scoreKoalas);

if (scoreDolphins > scoreKoalas) {
    console.log(`Dolphins has higher score ${scoreDolphins} than Koalas.`);
}
else if (scoreDolphins < scoreKoalas) {
    console.log(`Koalas has higher score ${scoreKoalas} than Dolphins.`);
}
else {
    console.log("It's a draw.");
}

// BONUS I & II
const scoreDolphins = (97 + 112 + 11) / 3;
const scoreKoalas = (109 + 9 + 12) / 3;
console.log(scoreDolphins, scoreKoalas);

if (scoreDolphins > scoreKoalas && scoreDolphins >= 100) {
    console.log(`Dolphins has higher score ${scoreDolphins} than Koalas.`);
}
else if ((scoreDolphins < scoreKoalas) && (scoreKoalas >= 100)) {
    console.log(`Koalas has higher score ${scoreKoalas} than Dolphins.`);
}
else if ((scoreKoalas >= 100) && (scoreDolphins >= 100)) {
    console.log("It's a draw.");
}
else {
    console.log("No one wins the trophy.");
}



const day = "monday";

switch (day) {
    case "monday":
        console.log("Plan to study");
        console.log("Go to code.");
        break;
    case "tuesday":
        console.log("Gym");
        break;
    case "wednesday":
        console.log("Date");
        break;
    case "thursday":
    case "friday":
    case "saturday":
        console.log("study");
        break;
    case "sunday":
        console.log("Enjoy the weekend");
}


// ternary operator
const age = 18;
age >= 18 ? console.log("You can drink wine.") : console.log("You can not drink wine.");



const bill = 430;
const tip = (bill <= 300 && bill >= 50) ? (bill * 0.15) : (bill * 0.20);

console.log(`The bill was ${bill}, the tip was ${tip}, and the total value ${bill + tip}`);

console.log(bill <= 300 && bill >= 50);



*/
