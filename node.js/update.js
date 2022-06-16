const dbConnect = require("./mongodb");

// updateOne(): can update the data of particular object.
// update(): can update the data of all the objects with similar mentioned attributes.

const updateData = async () => {
  let data = await dbConnect();
  let result = await data.updateOne(
    { first_name: "Vedant" },
    { $set: { company: "Google" } }
  );

  console.log(result);
};

updateData();
