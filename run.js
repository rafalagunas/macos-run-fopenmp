const { exec } = require("child_process");

var myArgs = process.argv.slice(2);
console.log(myArgs.toString());

exec(
  "g++-10 -fopenmp -o your_program -mavx " + myArgs,
  (error, stdout, stderr) => {
    if (error) {
      console.log(`error: ${error.message}`);
      return;
    }
    if (stderr) {
      console.log(`stderr: ${stderr}`);
      return;
    }
    console.log(`stdout: ${stdout}`);
  }
);
