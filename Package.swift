// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterSql",
    products: [
        .library(name: "TreeSitterSql", targets: ["TreeSitterSql"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterSql",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterSqlTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterSql",
            ],
            path: "bindings/swift/TreeSitterSqlTests"
        )
    ],
    cLanguageStandard: .c11
)
