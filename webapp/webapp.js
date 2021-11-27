function gotop() {
    var url = "./pagee2.html";
    window.location.href = url;
}

function checkdata() {
    var username = document.getElementById("name");
    var usermail = document.getElementById("email");
    var usercell = document.getElementById("ROLL number");

    if (usermail.value == "") {
        alert("Please enter a user email");
        usermail.focus();
        return false;
    }
    if (usercell.value == "") {
        alert("Please enter a user cell number");
        usercell.focus();
        return false;
    } else {
        gotop();
    }
}

function checkpage() {
    alert("question added successfully");
    return true;
}