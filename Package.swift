// swift-tools-version:4.0

import PackageDescription

let package = Package(
    name: "cwiegand",
    products: [
        .library(name: "cwiegand", targets: ["cwiegand"]),
    ],
    targets: [
        .target(
            name: "cwiegand",
            path: "./Sources/wiegand"
        ),
    ]
)