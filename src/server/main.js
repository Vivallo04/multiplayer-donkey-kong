const { Server } = require("socket.io");
const config = require("./config");

const io = new Server();

io.on("connection", (socket) => {
    console.log(`New socket connection created`);
    console.log(socket.id);
});

io.listen(3050);
console.log("New socket connection opened and running...");