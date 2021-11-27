import classes from "./Layout.Module.css";
import Navigation from "./MainNavigation";
function Layout(props) {
  return (
    <div>
      <Navigation />
      <main className={classes.main}>{props.children}</main>
    </div>
  );
}
export default Layout;
