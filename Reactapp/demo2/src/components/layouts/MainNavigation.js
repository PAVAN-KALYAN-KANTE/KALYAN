import { Link } from "react-router-dom";
import classes from "./MainNavigation.Module.css";

function Navigation() {
  return (
    <header className={classes.header}>
      <div className={classes.logo}>React meets</div>
      <nav>
        <ul>
          <ol>
            <Link to="/">New Meet</Link>
          </ol>
          <ol>
            <Link to="/favor">Favourites</Link>
          </ol>
          <ol>
            <Link to="/Allmeets">Allmeets</Link>
          </ol>
        </ul>
      </nav>
    </header>
  );
}
export default Navigation;
