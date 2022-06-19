const mongoose = require("mongoose");

const EmployeesSchema = new mongoose.Schema({
  first_name: String,
  last_name: String,
  email: String,
  gender: String,
  company: String,
});

const EmployeesModel = mongoose.model("employee-details", EmployeesSchema);

module.exports = EmployeesModel;
