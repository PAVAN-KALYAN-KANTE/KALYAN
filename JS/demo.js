console.log("hello world!");
var num = 5
console.log(num + 2)
num = num * num
console.log(num)
num = 7000000
console.log(num)

let obj = {
    a: 1,
    b: 2,
    c: {
        dhoni: 'csk',
        santner: 'nz'
    }
}
for (let p in obj) {
    console.log(p, obj[p]);
}

function add(a, b) {
    return a + b;
}
console.log(add(3, 2));

let laptop1={
    a: 1,
    b: 2,

    compare: function(other) {
        if(this.a>other.a) return this;
    }
}
let laptop2={
    a: 0,
    b: 3
}
console.log(laptop1.compare(laptop2))