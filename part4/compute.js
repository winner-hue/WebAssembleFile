mergeInto(LibraryManager.library, {
    add: function (a, b) {
        return js_add(a, b);
    }, sub: function (a, b) {
        return js_sub(a, b);
    }
})