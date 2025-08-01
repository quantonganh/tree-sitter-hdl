import XCTest
import SwiftTreeSitter
import TreeSitterHdl

final class TreeSitterHdlTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_hdl())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading HDL grammar")
    }
}
