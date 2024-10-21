import XCTest
import SwiftTreeSitter
import TreeSitterSql

final class TreeSitterSqlTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_sql())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Sql grammar")
    }
}
