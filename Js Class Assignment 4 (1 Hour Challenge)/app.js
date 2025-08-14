var luckyNumber = "7";
var guessGame = prompt("1-10 ke darmiyan number guess kren")

if (guessGame === luckyNumber) {
    alert("Congratulation")
} else if (guessGame === "8") {
    alert("bahut karebb ho")
}else if(guessGame < "3"){
    alert("low guess hai! Try again")
}else if(guessGame === "5"){
    alert("bas aik step dor hai")
}else if(guessGame >= 9){
    alert("bahut dor ho")
} else{"try again"}
