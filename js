let todoList = [];

// ---------------- FUNCTIONS ----------------

// View list
function viewList() {
    console.log("\nYour To-Do List:");

    if (todoList.length == 0) {
        console.log("No items in your list.");
    } else {
        for (let i = 0; i < todoList.length; i++) {
            console.log((i + 1) + ". " + todoList[i]);
        }
    }
}

// Add item
function addItem(item) {
    todoList.push(item);
    console.log("\"" + item + "\" added to your list.");
}

// Remove item
function removeItem(num) {
    if (todoList.length == 0) {
        console.log("Your list is empty!");
        return;
    }

    let index = num - 1;

    if (index >= 0 && index < todoList.length) {
        let removed = todoList.splice(index, 1);
        console.log("\"" + removed + "\" removed from your list.");
    } else {
        console.log("Invalid item number!");
    }
}

// Exit program
function exitProgram() {
    console.log("Exiting To-Do List. Goodbye!");
    process.exit(0);
}


// ---------------- MAIN PROGRAM (C-style flow) ----------------

console.log("\n--- Program Starting ---");

// Add items
addItem("Buy groceries");
addItem("Walk the dog");

// View list
viewList();

// Remove item #1
removeItem(1);

// View again
viewList();

// Exit
exitProgram();
