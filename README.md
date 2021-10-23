# greenpass string reader

dependencies: [base45-ansi-C](https://github.com/ehn-dcc-development/base45-ansi-C.git), [zlib](https://www.zlib.net/), [COSE-C](https://github.com/cose-wg/COSE-C.git).

About **base45-ansi-C** it raise many warning because it make an signed integer overflow (which is **UB**)
i don't care for now, but it's important to know.

I started this to help a guy, then i have wasted hours trying to figure how to COSE-C should be used to this purpose, 
so i decided to publish here.

### Building

```bash
# clone this project
git clone https://github.com/Manu-sh/greenpass_string_reader.git
```


```bash
# then into the folder
mkdir -p build && \\
cd build       && \\
cmake ..       && \\
make -j`nproc`
```

### useful links

* https://github.com/jojo2234/GreenPass-Experiments
* https://dencode.com/string/base45

* https://lorenzomillucci.it/posts/2021/06/2021-06-28-ubuntu-decodificare-greenpass-covid-19 (italian)