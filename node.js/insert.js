const dbConnect = require("./mongodb");

const insert = async () => {
  const db = await dbConnect();
  const result = await db.insert([
    {
      first_name: "Vedant",
      last_name: "Yetekar",
      email: "ursvedantyetekar@gmail.com",
      company: "Amazon",
    },
    {
      first_name: "Dave",
      last_name: "Hester",
      email: "davehester@gmail.com",
      company: "Google",
    },
  ]);

  console.log(result);
};

insert();
