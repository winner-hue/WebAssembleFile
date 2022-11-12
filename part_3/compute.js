mergeInto(LibraryManager.library, {
    add: function (a, b) {
        console.log("调用加法了哦")
        return a + b;
    }, sub: function (a, b) {
        console.log("调用减法了哦")
        return a - b;
    }
})