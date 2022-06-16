const dbConnect = require("./mongodb");

const deleteData = async () => {
  let data = await dbConnect();
  //   let result = await data.deleteOne({ first_name: "Dave" });
  let result = await data.deleteMany({ first_name: "Dave" });
  console.log(result);
};

deleteData();
