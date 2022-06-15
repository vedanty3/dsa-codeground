const dbConnect = require("./mongodb");

const updateData = async () => {
  let data = await dbConnect();
  let result = await data.updateOne(
    { first_name: "Vedant" },
    { $set: { company: "Google" } }
  );

  console.log(result);
};

updateData();
