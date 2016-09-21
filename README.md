# scintilla-protobufs

### Installation

1) Install nanopb

```
cd /opt/
git clone https://github.com/nanopb/nanopb.git
cd nanopb
git checkout tags/nanopb-0.3.6
```

### Usage (This is a generic description; this repo places the .proto and the output libs in its root)

1) Create your .proto file

2a) Use the follow command to generate the c protobuf lib
```
/opt/nanopb/generator-bin/protoc -I /path/to/.proto/folder/ --nanopb_out /path/to/output/folder/ /path/to/.proto/folder/my_protobuf.proto
```

2b) Use the following command to generate the python protobuf lib
```
/opt/nanopb/generator-bin/protoc -I /path/to/.proto/folder/ --python_out /path/to/output/folder/ /path/to/.proto/folder/my_protobuf.proto
```
