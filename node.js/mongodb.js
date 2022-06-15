const { MongoClient } = require("mongodb");
const url = "mongodb://localhost:27017";
const client = new MongoClient(url);

const dataBase = "employee-db";

const dbConnect = async () => {
  let result = await client.connect();
  let db = result.db(dataBase);

  return db.collection("employee-details");
};

module.exports = dbConnect;
