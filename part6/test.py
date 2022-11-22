import pywasm

runtime = pywasm.load("add.wasm")
r = runtime.exec("add", [1.2, 3.4])
print(r)



runtime = pywasm.load("compute_func.wasm")
r = runtime.exec("compute", [1.2, 3.4, 1])
print(r)